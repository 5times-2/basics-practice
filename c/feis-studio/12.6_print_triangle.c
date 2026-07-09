#include <stdio.h>

void print_stars(int x);
void print_triangle(int N);
//void return nothing

int main() {
	int N;
	printf("N = ");
	scanf("%d", &N);
	print_triangle(N);

	return 0;
}

void print_triangle (int N) {
	int x;
	for (x = 1; x <= N; ++x) {
		print_stars(x);
		printf("\n");
	}
}

void print_stars (int x) {
	int y;
	for (y = 1; y <= x; ++y) {
		printf("*");
	}
}