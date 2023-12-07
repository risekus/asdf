#include <stdio.h>

typedef struct {
	char name[20];
	char Country[20];
	int Population;
}city;

int main() {
	city ct[3];
	printf("Input three cities: \n");
	
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", ct[i].name, sizeof(ct[i].name));
		printf("Country> ");
		scanf_s("%s", ct[i].Country, sizeof(ct[i].Country));
		printf("Population> ");
		scanf_s("%d", &ct[i].Population, sizeof(ct[i].Population));
	}

	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %d people \n", i+1, ct[i].name, ct[i].Country, ct[i].Population);
	
	return 0;
}