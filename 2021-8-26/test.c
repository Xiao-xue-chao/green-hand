#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

void my_revolve_1(char arr[], int sz,int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int k = 0;
		char exc = arr[0];
		for (k = 0; k < sz; k++)
		{
			arr[k] = arr[k + 1];
		}
		arr[sz - 1] = exc;
	}
}
void my_printf(char arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
}
int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	int k = 0;
	scanf("%d", &k);
	int sz = strlen(arr);
	my_revolve_1(arr, sz, k);
	my_printf(arr, sz);
	return 0;
}