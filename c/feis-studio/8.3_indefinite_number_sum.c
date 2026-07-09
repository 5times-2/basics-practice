#include <stdio.h>
int main() {
	int integer;
	int sum = 0;
	printf("Please eneter the number (quit: 0): \n");
	scanf ("%d", &integer);
	while (integer != 0) {
		sum = integer + sum;
		scanf ("%d", &integer);
	}
	printf ("Sum: %d", sum);
	return 0;
}