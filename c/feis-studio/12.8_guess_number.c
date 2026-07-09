#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int Guess;
	int Ans = rand() % 100;

	do {
		printf("Please enter your guess: ");
		scanf("%d", &Guess);
		if (Guess > Ans) {
			printf("Too large!\n");
		} else if (Guess < Ans) {
			printf("Too small!\n");
		}
	} while (Guess != Ans);
	printf("Correct!");
	return 0;

}
