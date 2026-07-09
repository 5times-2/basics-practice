#include <stdio.h>
int main() {
	int guess, answer = 3;
	printf ("Please enter your guess: ");
	scanf ("%d", &guess);
	while (guess != answer) {
		if (guess > answer) {
			printf ("Too large!\n");
		} else {
			printf ("Too small!\n");
		}
		printf("Please enter your guess: ");
		scanf ("%d", &guess);
	}
	printf ("Correct!\n");
	return 0;
}