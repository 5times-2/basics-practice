#include <stdio.h>

int main() {
	int i, n[10];
	printf("Please enter 10 integer: ");
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	int max = n[0];
	for(i = 1; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	int avg = 0;
	for(i = 0; i <= 9; i++) {
		avg = avg + n[i];
	}
	printf("Max: %d\nAvg: %d\n", max, avg/10);
	return 0;
}