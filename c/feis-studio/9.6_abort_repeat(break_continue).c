#include <stdio.h>
int main() {
	int max, N;
	printf ("Max = ");
	scanf ("%d", &max);
	for (N = max; N >= 1; N--) {
		if (N % 3 == 2 && N % 5 == 3 && N % 7 == 2) {
			printf ("%d\n", N);
			break;
		}
	}
	return 0;
}