#include <stdio.h>
int main() {
	int count, number;
	for (count = 1; count <= 10; count++) {
		number = 11 - count;
		printf("%d\n", number);
	}
	return 0;
}