#include <stdio.h>

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

int main() {
	char str[12] = {
		'H', 'e', 'l', 'l', 'o', ' ', 
		'w', 'o', 'r', 'l', 'd'};
	printf("Length: %zu\n", sizeof(str));
	printf("Length: %d\n", str_len(str));
	return 0;
}