#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//二分查找
int binary_search(int arr[], int sz, int key)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 99;
	int a = binary_search(arr, sz, key);
	if (a != -1)
	{
		printf("%d\n", a);
	}
	else
		printf("未找到\n");
	return;
}

////计算1000到2000闰年的个数
//int is_leap_year(int i)
//{
//	//if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//	//	return 1;
//	return ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));
//}
//
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}