#include <stdio.h>

int main() {
	int v[5] = {1, 2, 3, 4, 5};
	int *n = v;
	//The reason we don't add * before n != v+5,
	//is because we're mainly want to read the address but not the variable.
	while (n != v+5) {
		printf("%d\n", *n++);
	}
	return 0;
}