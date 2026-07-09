#include <stdio.h>
int main() {
	int integer1, integer2;
	char operation;
	float answer;
	printf("Please enter the arithmetic yoy want to operate: ");
	scanf ("%d%c%d", &integer1, &operation, &integer2);
	if (operation == '+') {
		answer = integer1 + integer2;
	} else if (operation == '-') {
		answer = integer1 - integer2;
	} else if (operation == '*') {
		answer = integer1 * integer2;
	} else if (operation == '/') {
		answer =(float) integer1 / integer2;
	}
	printf ("ANS:%f\n", answer);
	return 0;
}