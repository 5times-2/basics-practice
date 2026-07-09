#include <stdio.h>
int main() {
	int v, max;
	printf ("Please enter the first integer: ");
	scanf ("%d", &v);
	max = v;
	printf ("Please enter the second integer: ");
	scanf ("%d", &v);
	if (v > max) {
		max = v;
	}
	printf ("Please enter the third integer: ");
	scanf ("%d", &v);
	if (v > max) {
		max = v;
	}
	printf("maximum is: %d \n", max);
	return 0;
}