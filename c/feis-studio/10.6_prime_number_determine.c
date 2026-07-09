#include <stdio.h>
int main() {
	int N;
	printf ("N: ");
	scanf ("%d", &N);
	int number, count = 0;
	for (number = 1; number <= N; ++number){
		if (N % number == 0) {
			++count;
		}
	}
	printf ("count = %d\n", count);
	if (count == 2) {
		printf ("N is a prime number\n");
	} else {
		printf ("N is not a prime number\n");
	}
	return 0;
}