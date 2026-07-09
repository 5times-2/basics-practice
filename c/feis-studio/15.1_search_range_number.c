#include <stdio.h>

int main() {
	int i, n[10];
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	while(1) {
		int L, R;
		printf("L R: ");
		scanf("%d %d", &L, &R);
		if (L == 0 && R == 0) {
			break;
		}
		printf("Ans: ");
		for (i = 1; i <= 10; i++) {
			if (n[i-1] >= L && n[i-1] <= R) {
				printf("%d ", n[i-1]);
			}
		}
		printf("\n");
	}
	return 0;
}
