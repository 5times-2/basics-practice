#include <stdio.h>
int main() {
	int x, y;
	for (y = 1; y < 30/2; ++y) {
		x = 30 - y;
		if (x * y == 221) {
			printf ("%d, %d\n", x, y);
		}
	}
	return 0;
}
