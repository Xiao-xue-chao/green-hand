#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������
#define N 5
#define M 5
void My_switch(int arr1[N], int arr2[M])    //��������
{
	int i = 0;
	int n = N;
	for (i = 0; i < n; i++)
	{
		int tmp = arr1[i];
		 arr1[i] = arr2[i];
		 arr2[i] = tmp;
	}
	printf("\n");
}
void My_printf(int arr[N], int n)            //�������
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[N] = { 0,2,4,6,8 };
	int arr2[M] = { 1,3,5,7,9 };
	printf("����ǰ:\n");
	My_printf(arr1, N);
	My_printf(arr2, M);

	My_switch(arr1, arr2);
	
	printf("������:\n");
	My_printf(arr1, N);
	My_printf(arr2, M);
	return 0;
}