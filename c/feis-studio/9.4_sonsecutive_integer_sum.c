#include <stdio.h>
int main() {
	int N, integer, sum = 0;
	printf ("N= ");
	scanf ("%d", &N);
	for (integer = 1; integer != N+1; integer++) {
		sum = integer + sum;
	}
	printf("%d\n", sum);
	return 0;
}