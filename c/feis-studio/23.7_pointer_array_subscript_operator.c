#include <stdio.h>

int main() {
	int v[5];
	int *p = v;
	while (p != v+5) {
		*p++ = 0;			//Equal to *p = 0; p++;
	}
	return 0;
}