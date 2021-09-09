#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}