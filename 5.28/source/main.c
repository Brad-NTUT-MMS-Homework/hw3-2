#include <stdio.h>

int main() {
	char inputChar, outputChar;


	printf("Please input an alphabet: ");
	scanf_s("%c", &inputChar);
	
	if (inputChar <= 122 && inputChar >= 97) {
		outputChar = (char)((int)inputChar - 32);
	} else if (inputChar <= 90 && inputChar >= 65) {
		outputChar = (char)((int)inputChar + 32);
	} else {
		return -1;
	}

	printf("The transferred alphabet: %c", outputChar);

	return 0;
}