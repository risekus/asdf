#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double dev(int* str)
{
	double temp = 0,tem =0;
	int	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += str[i];
	}
	temp = sum / 5;

	for (int i = 0; i < 5; i++)
	{
		tem += pow(str[i] - temp,2);
	}

	temp = tem / 5;
	temp = (double)sqrt(temp);
	return (temp);
}
int main(void)
{
	int str[5];
	printf("Enter 5 real numbers : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &str[i]);
	printf("\n");
	printf("Standard Deviation = %.3f", dev(str));
}