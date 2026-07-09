#include <stdio.h>

int main() {
	int integer, sum;
	printf ("Please enter the first integer: ");
	scanf ("%d", &integer);
	sum = integer ;
	printf ("Please enter the second integer: ");
	scanf ("%d", &integer);
	sum = sum + integer; /*equal sign means to finish the calculation of the right hand side then save the result to the left hand side*/
	printf ("Please enter the third integer: ");
	scanf ("%d", &integer);
	sum = sum + integer;
	printf ("Sum is %d. \n", sum);
	return 0;
}

/**/
