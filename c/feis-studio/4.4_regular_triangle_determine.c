#include <stdio.h>
int main() {
	int length1, length2, length3;
	printf("Please enter the lenth: ");
	scanf ("%d%d%d", &length1, &length2, &length3);
	if (length1 == length2&&length2 == length3) {
		printf ("Regular triangle");
	}
	return 0;

}
