#include <stdio.h>
int main(void)
{
	for (int love = 4; love >= 0; love--)
	{
		for (int air = 1; air <= love; air++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 9 - 2*love; star++)
		{
			printf("*");
		}
		for (int air2 = 1; air2 < love; air2++)
		{
			printf(" ");
		}
		printf(" \n");
	}
}
