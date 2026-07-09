#include <stdio.h>
int main() {
	int s1, s2, s3;
	printf ("Please enter the lengths: ");
	scanf ("%d%d%d", &s1, &s2, &s3);
	if (s1^2 == s2^2+s3^2 || s2^2 == s3^2+s1^2 || s3^2 == s1^2+s2^2) {
		printf ("Rectangular triangle\n");
	}
	return 0;
}