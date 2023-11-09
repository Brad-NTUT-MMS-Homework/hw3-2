#include <stdio.h>

float powerMul(float base, int exponent) {
	return exponent == 0 ? 1 : base * powerMul(base, exponent - 1);
}

int main() {
	float base;
	int exponent;

	printf("Input base and exponent: ");
	scanf_s("%f %d", &base, &exponent);

	printf("Ans: %.3f", powerMul(base, exponent));
}