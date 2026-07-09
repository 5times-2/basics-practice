#include <stdio.h>
int main() {
	int a, b, c;
	printf ("Please enter three integer: ");
	scanf ("%d%d%d", &a, &b, &c);
	printf ("Before: %d %d %d\n", a, b, c);
// I use the bubble sort algorithm here to solve the problem
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (b > c) {
		b = b + c;
		c = b - c;
		b = b - c;
	}
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf ("After: %d %d %d", a, b, c);
	return 0;
}
