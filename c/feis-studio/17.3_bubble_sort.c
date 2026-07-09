#include <stdio.h>

int main( ) {
	int i , n[5], j, t;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	for (i = 1; i <= 5; i++ ) {
		for (j = 0; j < 5 - i; j++) {
			if (n[j] > n[j+1]) {
				t = n[j+1];
				n[j+1] = n [j];
				n[j] = t;
			}	
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d", n[i]);
	}
	return 0;
}