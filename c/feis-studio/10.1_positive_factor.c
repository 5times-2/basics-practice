#include <stdio.h>
int main() {
	int N, count;
	printf ("N : ");
	scanf ("%d", &N);
	for (count = 1; count <= N; count++) {
		if (N % count == 0) {
			printf ("%d ", count);
		}
	}
	printf ("\n");
	return 0;
}