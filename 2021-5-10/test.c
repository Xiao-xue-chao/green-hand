#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define N 5
void Printarr(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void Reversearr(int arr[], int s, int t)   //s��ʼ,t����
{
	for (; s < t; s++, t--)
	{
		int tmp = arr[s];
		arr[s] = arr[t];
		arr[t] = tmp;
	}
}
int main()
{
	int arr[N] = { 1,2,3,4,5 };
	int k = 0;
	scanf("%d", &k);
	if (k < 0 || k > N)
	{
		printf("�������\n");
		return -1;
	}
	Printarr(arr, N);
	Reversearr(arr, 0, N - k - 1);
	Printarr(arr, N);
	Reversearr(arr, N - k, N - 1);
	Printarr(arr, N);
	Reversearr(arr, 0, N - 1);
	Printarr(arr, N);
	return 0;
}