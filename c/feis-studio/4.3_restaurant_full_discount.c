#include <stdio.h>
int main() {
	int number;
	printf ("Please enter the number of customers: ");
	scanf ("%d", &number);
	number = number * 300;
	if (number >= 3000) {
		number = number * 0.8;
	}
	printf ("Toltal: %d", number);
	return 0;

}
