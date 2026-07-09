#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int x, dice;
	for (x = 1; x <= 1; x++) {
		dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}
	return 0;
}