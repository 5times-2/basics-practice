#include <stdio.h>
int main() {
	int x, muitiplicand;
	for (x = 2; x <= 9; ++x) {
		for (muitiplicand = 1; muitiplicand <= 9; ++muitiplicand){
			printf("%d x %d = %d\n", x, muitiplicand, x*muitiplicand);
		}
	}
	return 0;
}