#include <stdio.h>

int main() {
	int i, n, max, avg = 0;
	printf("Please enter 10 integer: ");
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n);
		if (max < n || i == 1) {
			max = n;
		}
		avg = avg + n;
	}
	printf("Max: %d\nAvg: %d\n", max, avg/10);
	return 0;
}