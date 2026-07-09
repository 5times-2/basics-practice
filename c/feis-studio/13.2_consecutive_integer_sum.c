#include <stdio.h>

int sum(int);

int main() {
	int N;
	printf("N = ");
	scanf("%d", &N);
	printf("%d", sum(N));
	return 0;
}

int sum(int N) {
	if (N != 1) {
		N = sum(N - 1) + N;	
	}
	return N;
}
