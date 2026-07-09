#include <stdio.h>
int main() {
	int N;
	printf ("N: ");
	scanf ("%d", &N);

	int number;
	for (number = 2; number < N && N % number != 0; ++number);

	if (number == N) {
		printf ("N is a prime number\n");
	} else {
		printf ("N is not a prime number\n");
	}
	return 0;
}