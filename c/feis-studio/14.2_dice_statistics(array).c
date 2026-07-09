#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int counter[6] = {0, 0, 0, 0, 0, 0};
	//Empty array number will replaced by the elements numbers.
	//Unspecified element will defaultly turn into 0.
	int i;
	for (i = 1; i <= 6000; ++i) {
		int dice = rand() % 6 + 1;
		counter[dice - 1]++;
	}
	for (i =1; i <= 6; ++i) {
		printf("%d: %d\n",i , counter[i - 1]);
	}
	return 0;
}
