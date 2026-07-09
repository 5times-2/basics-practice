#include <stdio.h>
int main() {
	int a, b, c, med;
	printf ("Please enter three integer: ");
	scanf ("%d%d%d", &a, &b, &c);
	if (a >= b && a <= c || a <= b && a >= c) {
		med = a;
	}
	if (b > a && b <= c || b < a && b >= c) {
		med = b;
	}
	if (c > a && c < b || c < a && c > b) {
		med = c;
	}
	printf ("median is: %d", mid);
	return 0;
}
