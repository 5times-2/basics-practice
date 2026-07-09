#include <stdio.h>
int main() {
	int x, y;
	for (y = 1; y < 30; ++y) {
		for (x = 1; x + y <= 30; ++x) {
			if (x * y == 221 && x + y == 30) {
				printf ("x = %d ", x);
				printf ("y = %d ", y);
				printf ("\n");
			}
		}
	}
	return 0;
}
