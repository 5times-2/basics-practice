#include <stdio.h>
int main() {
	int s1, s2, s3, t;
	printf ("Please enter the lengths: ");
	scanf ("%d%d%d", &s1, &s2, &s3);
	if (s2 < s1) {
		t = s1;
		s1 = s2;
		s2 = t;
	}
	if (s3 < s1) {
		t = s3;
		s3 = s1;
		s1 = t;
	}
	if (s3 < s2) {
		t = s3;
		s3 = s2;
		s2 = t;
	}
	
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