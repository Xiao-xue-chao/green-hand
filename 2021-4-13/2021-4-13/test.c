#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	printf("%d\n", sz);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

////二分查找 
//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	int x;
//	scanf("%d", &x);
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left, mid, right;
//	left = 0;
//	right = N - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (x == arr[mid])
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		else if (x >= arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

////计算n的阶乘并求和
//int main()
//{
//	int sum1 = 1;
//	int sum2 = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum1 *= i;
//		sum2 += sum1;
//	}
//	printf("%d\n", sum1);
//	printf("%d\n", sum2);
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = N - 1;
//	int mid = 0;
//	int x;
//	scanf("%d",&x);
//	while (arr[left] <= arr[right])
//	{
//		mid = arr[(left + right) / 2];
//		if (x == mid)
//		{
//			printf("%d", (left + right) / 2);
//		}
//		else if (x <= mid)
//		{
//			right = (left + right) / 2 - 1;
//		}
//		else
//		{
//			left = (left + right) / 2 + 1;
//		}
//	}
//	printf("没找到");
//	return 0;
//}

////输出10个数里最大的
//#define N 10
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[N] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}