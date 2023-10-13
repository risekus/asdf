#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary(int n)
{
	static int t = 0;
	int ten;
	
	if (n % 2 == 0)
	{
		t++;
		return binary(n / 2);
	}

	else if (n == 1)
	{
		ten = 1;
		for (int m = 0; m < t; m++)
		{
			ten *= 10;
		}
		return (ten);
	}

	else
	{
		ten = 1;
		for (int m = 0; m < t; m++)
		{
			ten *= 10;
		}
		t++;
		return (ten + binary((n - 1) / 2));

	}
}
int main()
{
	int what;
	printf("please enter a number: ");
	scanf("%d", &what);
	printf("\n");
	printf("%d", binary(what));
}

//for문 연습겸쓰고싶었습니다.
