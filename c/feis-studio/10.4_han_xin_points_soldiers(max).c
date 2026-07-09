#include <stdio.h>
int main() {
	int max, N, answer = 0;
	printf ("Max = ");
	scanf ("%d", &max);
	for (N = max; N >= 1 && answer == 0; N--) {
		if (N % 3 == 2 && N % 5 == 3 && N % 7 == 2) {
			answer = N;
		}
	}
	printf ("%d\n", answer);
	return 0;
}