#include <stdio.h>

int main() {
	int v[3] = {1, 2, 3};
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of v[0]: %zu\n", sizeof(v[0]));
	printf("Size of v: %zu\n", sizeof(v));
	printf("Length of v: %zu\n", sizeof(v)/sizeof(v[0]));
	return 0;
}

//But if we use fuction to calculate the sizeof(v), the result will not be the size of arrary v,
//because the definition of array in function is not def an array in a fuction,
//it is use the input array directly.
//So in the fuction "void f(int v[]) {}", the "v" is actually not an array.
//So when we use the last printf in another function, the result will be wrong.