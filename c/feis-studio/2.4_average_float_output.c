#include <stdio.h>
int main() {
	int N1, N2, N3;
	printf("Please enter the first integer: ");
	scanf("%d", &N1);
	printf("Please enter the second integer: ");
	scanf("%d", &N2);
	printf("Please enter the third integer: ");
	scanf("%d", &N3);
	double avg = (N1 + N2 + N3)/3.;
	printf("The average is: %f", avg);

	return 0;

}
