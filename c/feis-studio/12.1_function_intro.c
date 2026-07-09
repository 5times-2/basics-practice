#include <stdio.h>
double div(double);

int main() {
	int N;
	scanf ("%d", &N);
	printf ("%f\n", div(N));
	return 0;
}

double div(double x) {
	return x / 2;
}
