#include <stdio.h>

void str_print(char str[]) {
	printf("%s\n", str);
}

int main() {
	char str[] = "Hello world";
	str_print(str);
	return 0;
}