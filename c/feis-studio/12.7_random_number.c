#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	//srand means the seed code of "rand()"
	int N;
	for (N = 1; N <= 5; ++N) {
		printf("%d\n", rand());
	}
	return 0;
}