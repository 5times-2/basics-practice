#include <stdio.h>
int main() {
	int a, b, min;
	printf ("Please enter two integer: ");
	scanf ("%d%d", &a, &b);
	min = a;
	if (a > b) {
		min = b;
	}
	printf ("minimum is: %d", min);
	return 0;
}
