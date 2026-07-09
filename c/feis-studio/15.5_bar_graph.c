#include <stdio.h>

int main() {
	int i, j, n[10];
	printf("Please enter the 10 integr between 1 ~ 100: ");
	for (i = 1; i<= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	int scoreboard[10] = {0};
	for (i = 1; i <= 10; i++) {
		int chk1 = 0, chk2 = 10;
		for (j = 1; j<= 10; j++) {
			if (n[i-1] > chk1 && n[i-1] <= chk2 ) {
				scoreboard[j-1]++;
			}
			chk1 += 10;
			chk2 += 10;
		}
	}
	for (i = 1; i <= 10; i++) {
		printf("%3d: ", i*10);
		for (j = 1; j <= scoreboard[i-1]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}