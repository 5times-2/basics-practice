#include <stdio.h>

void countTo3(int);

int main() {
	countTo3(1);
	return 0;
}

void countTo3(int x) {
	if (x <= 3) {
		countTo3(x + 1);
		printf("%d\n", x);
		//If change the order of above two lines of code;
		//The result will change to 321 from 123;
	}
}
