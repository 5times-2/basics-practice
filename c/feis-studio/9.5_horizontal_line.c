#include <stdio.h>
int main() {
	int N, count;
	printf ("N : ");
	scanf ("%d", &N);
	for (count = 0; count <= N; count++) {
		printf ("*");
	}
	printf ("\n");
	return 0;
}