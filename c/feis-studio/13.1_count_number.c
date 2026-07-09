#include <stdio.h>

void countTo3(int);

int main() {
	countTo3(1);
	return 0;
}

void countTo3(int x) {
	if (x <= 3) {
		printf("%d\n", x);
		countTo3(x + 1);
	}
}
