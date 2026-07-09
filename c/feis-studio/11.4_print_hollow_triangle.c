#include <stdio.h>
int main() {
	int N, x, y, count = 0;
	printf ("N = ");
	scanf ("%d", &N);
	for (y = 1; y <= N; ++y) {
		for (x = 1; x <= y; ++x) {
			if (y == 1 || y == N || x == 1 || x == y) {
				printf ("*");
			} else {
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}
