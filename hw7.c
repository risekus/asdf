#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr1;
	int arr2[6] = { 7,8,9,10,11,12 };
	int* ptr2 = arr2;
	int temp = 0;

	printf("arr1: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", ptr1[i]);
	printf("\n");
	printf("arr2: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", ptr2[i]);
	printf("\n");

	
	for (int i = 0; i < 6; i++)
	{
		temp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = temp;
	}


	printf("\nafter swap\n");
	printf("arr1: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
}