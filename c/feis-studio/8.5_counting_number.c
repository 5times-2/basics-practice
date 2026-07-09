#include <stdio.h>
int main() {
	int start;
	int end;
	printf ("Please enter the start: ");
	scanf ("%d", &start);
	printf ("Please enter the end: ");
	scanf ("%d", &end);
	while (start <= end) {
		printf ("%d\n", start);
		start = start + 1;
	}
	return 0;
}