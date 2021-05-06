#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define N 5
#define M 5
int main()
{
	int arr1[N] = { 1,3,5,7,9 };
	int arr2[M] = { 2,4,6,8,10 };
	int i = 0;
	for (i - 0; i < N; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < M; i++)
	{
		printf("%d ", arr2[i]);
	}
	
	return 0;
}