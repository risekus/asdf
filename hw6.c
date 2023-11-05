#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf(" %d", &a[i]);
	}

	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++)
		if (a[i] % 2 == 1)
			printf("%d ", a[i]);

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++)
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
}