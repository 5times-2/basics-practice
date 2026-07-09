#include <stdio.h>

int max10(int n[10]);
int avg10(int n[10]);

int main() {
	int i, n[10], max, avg = 0;
	printf("Please enter 10 integer: ");
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	printf("Max: %d\n", max10(n));
	printf("Avg: %d\n", avg10(n));
	return 0;
}

int max10(int n[10]) {
	int max = n[0];
	for (i = 1; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	return max;
}

int avg10(int n[10]) {
	int sum = i[0];
	for (i = 1; i < 10; i++) {
		sum += n[i];
	}
	return sum / 10;
}