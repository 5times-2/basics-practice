#include <stdio.h>
int main() {
	int a, b, c, t;
	printf ("Please enter three integer: ");
	scanf ("%d%d%d", &a, &b, &c);
	printf ("Before: %d %d %d\n", a, b, c);
/* Exhaustive Algorithm */
/*and if we check every conditions, 
we can find there are some common that can be simplized */
	if (b < a) {
		t = a;
		a = b;
		b = t;
	}/*	(b < a <= c)
		(b <= c < a)
		(c < b < a) */
	if (c < a) {
		t = c;
		c = a;
		a = t;
	}/* (c < a <= b) */
	if (c < b) {
		t = c;
		c = b;
		b = t;
	}/* (a <= c < b)
		(b <= c < a)
		(c < a <= b) */
	printf ("After: %d %d %d", a, b, c);
	return 0;
}
