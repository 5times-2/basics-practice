#include <stdio.h>

int main() {
	int count = 9;
	int *countAddr = &count;//countAddr == &count;
	int result = *countAddr;//*countAddr == count;
	*countAddr = 10;// == count = 10;
	*&*&*&*&result = 20;// "*&" can offset.
	return 0;
}