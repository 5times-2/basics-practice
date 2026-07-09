#include <stdio.h>

int main() {
	int integer1, integer2, integer3, sum;
	printf ("Please enter the first integer: ");
	scanf ("%d", &integer1);
	printf ("Please enter the second integer: ");
	scanf ("%d", &integer2);
	printf ("Please enter the third integer: ");
	scanf ("%d", &integer3);
	sum = integer1 + integer2 + integer3 ;
	printf ("Sum is %d. \n", sum);
	return 0;
}

/*due to if the memory use is not been run out,
the speed wii always be better than the CPU use,
 so this solution is better than the other one 
 (less CPU use but high memory use)*/
/*but if the memory run out, 
OS will start to remove the useless program to Drive
for user to run the current program, 
it will take much mor time than normal CPU use*/