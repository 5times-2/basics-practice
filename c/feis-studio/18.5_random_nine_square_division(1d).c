#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int i, j, v[9], t;
	//Spawn a random nine square.
	for (i = 0; i < 9; i++) {
		v[i] = i + 1;
	}
	//Excange the value from random one to current one.
	for (i = 0; i < 9; i++) {
		j = rand() % (9 - i) + i;
		t = v[i];
		v[i] = v[j];
		v[j] = t;
	}
	//Print out.
	for (i = 0; i < 9; i++) {
		printf("%d ", v[i]);
		if (i % 3 == 2) {
			printf("\n");
		}
	}
	return 0;
}