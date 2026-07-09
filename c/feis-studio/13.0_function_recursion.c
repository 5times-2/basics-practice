#include <stdio.h>

int f(int);

int main() {
	printf("%d\n", f(0));
	return 0;
}

int f(int x) {
	if (x = 2) {
		return x;
	}
	return f(x + 1);
}
