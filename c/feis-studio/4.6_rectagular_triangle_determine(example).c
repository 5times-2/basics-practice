#include <stdio.h>
int main() {
	int s1, s2, s3;
	printf ("Please enter the lengths: ");
	scanf ("%d%d%d", &s1, &s2, &s3);
	if (s1*s1 == s2*s2+s3*s3 ||
		 s2*s2 == s3*s3+s1*s1 ||
		  s3*s3 == s1*s1+s2*s2) {
		printf ("Rectangular triangle\n");
	}
	return 0;
}