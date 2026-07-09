#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int i, n, j, count[10] = {0};
	for (i = 1; i <= 10; i++) {
		do {
			n = rand() % 10 + 1;
		} while (count[n-1] != 0);
		printf("%d ", n);
		count[n-1]++;
	}
	printf("\n");
	return 0;
}
//This method is much more simple in this case, that's because the range of the "n" is only 1~10.
//But despite we only print 10 number in toltal, but if the range of "n" is 1~10000,
//we will use the "count[10000]" for check table.