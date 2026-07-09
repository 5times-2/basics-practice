#include <stdio.h>
int main() {
	int max, N, answer = 0, count = 1;
	printf ("Max = ");
	scanf ("%d", &max);
	for (N = 1; N <= max && count <= 3; ++N) {
		if (N % 3 == 2 && N % 5 == 3 && N % 7 == 2) {
			answer = N;
			++count;
			printf ("%d\n", answer);
		}
	}
	return 0;
}