#include <stdio.h>

void hanoi(int n, char init_rod, char end_rod, char aux_rod) {
	if (n == 1) {
		printf("Move disk 1 from %c to %c\n", init_rod, end_rod);
		return;
	}

	// 先移到中間
	hanoi(n - 1, init_rod, aux_rod, end_rod);
	printf("Move disk %d from %c to %c\n", n, init_rod, end_rod);
	// 再移到後面
	hanoi(n - 1, aux_rod, end_rod, init_rod);
}

int main() {

	int disks = 3;
	hanoi(disks, 'A', 'C', 'B');
}