#include <stdio.h>
int max2(int, int, int);

int main() {
	int a, b, c;
	printf("Please enter three integers: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("max = %d", max3(a, b, c));
	return 0;
}

int max3(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	} else if (b >= a && b >= c){
		return b;
	} else {
		return c;
	}
}