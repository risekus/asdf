#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	printf("Input> ");
	fgets(a, sizeof(a), stdin);

	//ÌÌ°¡ º¸±â½È¾î¼­....
	for (int i = 0; i < 100; i++) {
		if (a[i] == '\n') {
			for (int p = i + 1; p < 100; p++)
				a[p] = '\0';
			break;
		}
	}

	printf("Output> ");
	for (int i = 0; i < 100; i++) {
		if (a[i] >= 65 && a[i] <= 90)
			a[i] += 32;

		else if (a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;

		printf("%c", a[i]);
	}
	return 0;
}