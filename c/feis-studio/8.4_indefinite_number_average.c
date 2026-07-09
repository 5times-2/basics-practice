#include <stdio.h>
int main() {
	int integer;
	float sum = 0;
	int count = 0;
	printf("Please eneter the number (quit: 0): \n");
	scanf ("%d", &integer);
	while (integer != 0) {
		sum = sum + integer;
		scanf ("%d", &integer);
		count = count + 1;
	}
	sum =(float) sum / count;
	if (count == 0) {
		printf ("The average is: %f\n", sum);
	} else {
		printf ("The average is N/A\n", sum);
	}
	
	return 0;
}