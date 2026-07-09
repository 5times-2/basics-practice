#include <stdio.h>
int maxv(int[]);

int main() {
	int n[4] = {3, 9, 7, -1};
	printf("%d\n", maxv(n));
	int m[6] = {3, 9, 1, 2, 7, -1};
	printf("%d\n", maxv(m));
	return 0;
}
//-1 in array n[] and array m[] is represent as the end of the array, not as an element.
int maxv(int n[]) {
	int i = 1, max = n[0];
	while(n[i] != -1) {
		if (n[i] > max) {
			max = n[i];
		}
		i++;
	}
	return max;
}