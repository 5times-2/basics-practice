#include <stdio.h>
int main() {
	int answer = 4;
	int guess;
	printf ("Please enter your guess: ");
	scanf ("%d", &guess);
	if (guess > answer) {
		printf ("too large!");
	}
	if (guess < answer) {
		printf ("too small!");
	}
	if (guess == answer) {
		printf ("correct!");
	}
	return 0;

}
