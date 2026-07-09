#include <stdio.h>

void str_print(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}

int main() {
	char str[] = {
		'H', 'e', 'l', 'l', 'o', '\0'
	};
	str_print(str);
	return 0;
}