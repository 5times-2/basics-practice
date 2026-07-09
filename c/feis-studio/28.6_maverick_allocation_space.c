#include <stdio.h>
#include <stdlib.h>

int main() {
	int* numbers;
	int length = 0, i;
	while (1) {
		int input;
		scanf("%d", &input);
		if (input == 0) break;
		int* larger = malloc(sizeof(int) * (length + 1));
		for(i = 0; i < length; i++) larger[i] = numbers[i];
		numbers = larger;			//Change direction to new memory space.
		numbers[length] = input;
		length++;
	}

	printf("Numbers: ");
	for (i = 0; i < length; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	return 0;
}