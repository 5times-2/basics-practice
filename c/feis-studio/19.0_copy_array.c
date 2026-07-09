#include <stdio.h>

int main() {
	int i, n[10];
	for (i = 0; i < 10; i++) {
		n[i] = i + 1;
	}
	int m[10];
	for (i = 0; i < 10; i++) {
		m[i] = n[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", m[i]);
	}
	return 0;
}