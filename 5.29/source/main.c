#include <stdio.h>

int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int findLCM(int a, int b) {
	// LCM * GCD = a * b
	return (a * b) / findGCD(a, b);
}

int main() {
	int num1, num2;

	printf("Enter first integer: ");
	scanf_s("%d", &num1);
	printf("Enter second integer: ");
	scanf_s("%d", &num2);

	printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));

	return 0;
}
