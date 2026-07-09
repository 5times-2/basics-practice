#include <stdio.h>
#include <string.h>

int main() {
	char source[5] = "test";
	char destination[5];
	//char destination[5]; will implicit transition to char *destination
	//in strcpy(destination, source); below.
	//char source[5] = "test"; will happen the same too.
	//strcpy(char *destination, const char *source);
	strcpy(destination, source);
	printf("%s\n", destination);
	return 0;
}