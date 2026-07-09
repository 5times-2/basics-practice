#include <stdio.h>
int main() {
	int id;
	int toltal;
	do {
		scanf ("%d", &id);
		switch (id) {
		case 1: toltal += 90; break;
		case 2: toltal += 75; break;
		case 3: toltal += 83; break;
		case 4: toltal += 89; break;
		case 5: toltal += 71; break;
		default: printf ("Not found\n");
		}
	} while (id != 0);
	printf ("Toltal: %d\n", toltal)
	
	return 0;
}