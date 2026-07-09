#include <stdio.h>
int main() {
	int N, x, y;
	printf ("N = ");
	scanf ("%d", &N);
	for (y = 0; y < N; ++y) {
		if (y == N - 1 || y == 0) {
			for (x = 0; x < N; ++x) {
				printf ("*");
			}
		} else {
			printf ("*");
			for (x = 2; x < N; ++x) {
				printf (" ");
			}
			printf ("*");
		}
		printf ("\n");
	}

	return 0;
}
