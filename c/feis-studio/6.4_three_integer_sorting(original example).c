#include <stdio.h>
int main() {
	int a, b, c, t;
	printf ("Please enter three integer: ");
	scanf ("%d%d%d", &a, &b, &c);
	printf ("Before: %d %d %d\n", a, b, c);
/* Exhaustive Algorithm */
//this algorithm is calculate every single possible and add to if condition
	if (b < a && a <= c||
		b <= c && c < a||
		c < b && b < a) {
		t = a;
		a = b;
		b = t;
	}/*	(b < a <= c)
		(b <= c < a)
		(c < b < a) */
	if (c < a && a <= b) {
		t = c;
		c = a;
		a = t;
	}/* (c < a <= b) */
	if (a <= c && c < b||
		b <= c && c < a||
		c < a && a <= b) {
		t = c;
		c = b;
		b = t;
	}/* (a <= c < b)
		(b <= c < a)
		(c < a <= b) */
	printf ("After: %d %d %d", a, b, c);
	return 0;
}
