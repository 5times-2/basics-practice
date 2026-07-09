#include <stdio.h>

int main() {
	int i, mode, count[10] = {0};
	printf("Please enter 10 mode between 0 ~ 9: ");
	for (i = 1; i <= 10; i++) {
		scanf("%d", &mode);
		count[mode]++;
	}
	int max_order = 0;
	for (i = 1; i < 10; i++) {
		if (count[max_order] <= count[i]) {
			max_order = i;
		}
		/*and there's no need to take the code below: 
		if (count[max_order] == count[i]) {
			if (max_order < i) {
				max_order = i;
				//nothing to do with the "mode[]", the most important is the order in "count".
				//so there's no need of "mode[]", just need to use "int mode;" .
			}
		}
		because when the order run 0~9, the new compare order must larger than the origin order.
		So if the count[max_order] <= count[i], just make the order "i" replace the order "max_order".*/
	}
	printf("Ans: %d", max_order);//just need to print the number of order(0~9).
	return 0;
}