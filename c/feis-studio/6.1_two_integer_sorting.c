#include <stdio.h>
int main() {
	int a, b;
	printf ("Please enter two integer: ");
	scanf ("%d%d", &a, &b);
	printf ("Before: %d %d\n", a, b);
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf ("After: %d %d", a, b);
	return 0;
}
