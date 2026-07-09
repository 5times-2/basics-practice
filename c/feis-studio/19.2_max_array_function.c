#include <stdio.h>
int maxv(int[], int N);

int main() {
	int n[3] = {3, 9, 7};
	printf("%d\n", maxv(n, 3));
	int m[5] = {3, 9, 1, 2, 7};
	printf("%d\n", maxv(m, 5));
	return 0;
}

int maxv(int n[], int N) {
	int i, max = n[0];
	for (i = 1; i <= N; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	return max;
}