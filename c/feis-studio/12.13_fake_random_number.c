#include <stdio.h>

int main() {
	unsigned int x = 1;
	//when useing "unsigned int", if "overflow" occured;
	//the number will automatically equal "%(UINT_MAX+1)";
	//UINT_MAX (Representation range);
	int i;
	for (i = 1; i <= 5; i++) {
		x = (x * 1103515245 + 12345);// % 4294967296 (= %(UINT_MAX+1))
		int rand = (unsigned int) (x / 65536) % 32768;
		printf("%d\n", rand);
	}
	return 0;

}
