#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int find_num(int arr[][3], int row, int col, int k)
{
	int m = row - 1;
	int n = 0;
	while (n < 3 && m >= 0)
	{
		if (arr[n][m] < k)
		{
			n++;
		}
		else if (arr[n][m] > k)
		{
			m--;
		}
		else
			return 1;
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
 	int ret = find_num(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}