#include <stdio.h>

int main() {
	int i, j, n, scoreboard[10] = {0};
	printf("Please enter the 10 integr between 1 ~ 100: ");
	for (i = 1; i<= 10; i++) {
		scanf("%d", &n);
		scoreboard[(n-1)/10]++;
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