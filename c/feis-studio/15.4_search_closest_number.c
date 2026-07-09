#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n[10], s, g[10];
	printf("Please enter 10 integer: ");
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	while(1) {
		printf("Please enter the integer you want to search: ");
		scanf("%d", &s);
		if (s == 0) {
			break;
		}
		for (i = 1; i <= 10; i++) {
			g[i-1] = abs(s - n[i-1]);
		}
		int min = g[0];
		int order = 1;
		for (i = 1; i <= 10; i++) {
			if (min > g[i-1]) {
				min = g[i-1];
				order = i;
			}
			if (min == g[i-1]) {
				if (n[order-1] > n[i-1]) {
					order = i;
				}
			}
		}
		printf("closest: %d\n", n[order-1]);
	}
	return 0;
}