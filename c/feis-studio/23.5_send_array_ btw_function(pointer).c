#include <stdio.h>
								//Equal to the right side:
int maxv(int [], int N);		//int maxv(int *, int N);

int main() {
	int a[3] = {3, 9, 7};
	printf("%d", maxv(a, 3));	//printf("%d", maxv(&a[0], 3));
	int b[5] = {3, 9, 1, 2, 7};
	printf("%d", maxv(b, 5));	//printf("%d", maxv(&b[0], 5));
	return 0;
}

int maxv(int v[], int N) {		//int maxv(int *v, int N) {
	ine max = v[0], i;			//ine max = *(v+0), i;
	for (i = 1; i <= N; i++) {
		if (v[i] > max) {		//if (*(v+i) > max) {
			max = v[i];			//max = *(v+i);
		}
	}
	return max;
}