#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n,yes;
	yes = 0;
	printf("what's your number? : ");
	scanf("%d",&n);
	for (int yeah = 2; yeah < n; yeah++)
		if (n% yeah ==0)
		{
			printf("it is not prime number.");
			yes = 1;
			break;
		}
	if (yes == 0)
		printf("it is a prime number.");

}
