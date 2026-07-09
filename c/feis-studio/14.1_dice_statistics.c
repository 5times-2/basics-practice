#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int ctr1 = 0, ctr2 = 0, ctr3 = 0, ctr4 = 0, ctr5 = 0, ctr6 = 0;
	int i;
	for (i = 1; i <= 6000; ++i) {
		int dice = rand() % 6 + 1;
		switch (dice) {
			case 1: ctr1++; break;
			case 2: ctr2++; break;
			case 3: ctr3++; break;
			case 4: ctr4++; break;
			case 5: ctr5++; break;
			case 6: ctr6++; break;
		}
	}
	printf("1: %d\n", ctr1);
	printf("2: %d\n", ctr2);
	printf("3: %d\n", ctr3);
	printf("4: %d\n", ctr4);
	printf("5: %d\n", ctr5);
	printf("6: %d\n", ctr6);
	return 0;
}
