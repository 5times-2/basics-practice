#include <stdio.h>
int main() {
	int N, x, y;
	printf ("N = ");
	scanf ("%d", &N);
	for (y = 0; y < N; ++y) {
		for (x = 0; x < N; ++x) {
			printf ("*");
		}
		printf ("\n");
	}

	return 0;
}