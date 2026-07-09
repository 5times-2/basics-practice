#include <stdio.h>

void sort(int *, int *);
void swap(int*, int *);

int main() {
	int a, b;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	sort(&a, &b);
	printf("max: %d\n", a);
}

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void sort(int *a, int *b) {
	if (*b > *a) {
		swap(&*a, &*b);
	}
}