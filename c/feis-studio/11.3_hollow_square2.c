#include <stdio.h>
int main() {
	int N, x, y;
	printf ("N = ");
	scanf ("%d", &N);
	for (y = 1; y <= N; ++y) {
		for (x = 1; x <= N; ++x) {
			if (y == N || y == 1 || x == N || x == 1) {
				printf ("*");
			} else {
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
