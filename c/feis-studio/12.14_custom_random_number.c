#include <stdio.h>

static unsigned int _x = 1;

int rand(void) {
	_x = _x * 1103515245 + 12345;
	return _x / 65536 % 32768;
}

void srand(unsigned int seed) {
	_x = seed;
}

int main() {
	srand(time(0));
	int i;
	for (i = 1; i <= 5; i++) {
		printf("%d\n", rand());
	}
	return 0;
}
