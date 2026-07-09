#include <stdio.h>
int main() {
	int a, b, c, t;
	printf ("Please enter three integer: ");
	scanf ("%d%d%d", &a, &b, &c);
	printf ("Before: %d %d %d\n", a, b, c);
/* SlectionSort Algorithm */
/* compare each element to find the smallest one then put it to variable a
, then compare the second one and third one */
	if (b < a) {
		t = a;
		a = b;
		b = t;
	}
	if (c < a) {
		t = c;
		c = a;
		a = t;
	}
	if (c < b) {
		t = c;
		c = b;
		b = t;
	}
	printf ("After: %d %d %d", a, b, c);
	return 0;
}
