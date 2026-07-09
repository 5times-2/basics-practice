#include <stdio.h>
int main() {
	char character;
	printf("Please enter a character: ");
	scanf("%c", &character);
	printf("%c\n", character + ('a' - 'A'));//32
	
	return 0;

}
