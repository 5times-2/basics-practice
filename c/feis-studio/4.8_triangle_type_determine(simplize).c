#include <stdio.h>
int main() {
	int s1, s2, s3;
	printf ("Please enter the lengths: ");
	scanf ("%d%d%d", &s1, &s2, &s3);
	if (s1 > s2) {
		s1 = s1 + s2;
		s2 = s1 - s2;
		s1 = s1 - s2;
	}
	if (s2 > s3) {
		s2 = s2 + s3;
		s3 = s2 - s3;
		s2 = s2 - s3;
	}//sorting the three integer from small to big 
	
	if (s1 == s3) {
		printf ("Regular triangle\n");
	}
	if (s1 == s2 || s2 == s3) {
		printf ("Isosceles triangle\n");
	}
	if (s3*s3 == s1*s1+s2*s2) {
		printf ("Rectangular triangle\n");
	}
	return 0;
}