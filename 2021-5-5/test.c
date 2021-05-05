#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define N 5
#define M 5
int main()
{
	int arr1[N] = { 1,3,5,7,9 };
	int arr2[M] = { 0,2,4,6,8 };

	return 0;
}

////排序算法
//#define N 5
//void menu()
//{
//	printf("************----------------------------**************\n");
//	printf("***********      1.输入整数序列         **************\n");
//	printf("***********      2.简单插入排序         **************\n");
//	printf("***********      3. 冒 泡 排 序         **************\n");
//	printf("***********      4. 快 速 排 序         **************\n");
//	printf("***********      5.简单选择排序         **************\n");
//	printf("***********      6. 退 出 程 序         **************\n");
//	printf("************----------------------------**************\n");
//}
//void Initboard(int arr[N], int n)  //初始化函数
//{
//	printf("输入整数序列\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("\n");
//}
//void Printboard(int arr[N], int n)  //打印函数
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Sinsert_sort(int arr[N], int n)  //简单插入排序
//{
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 1; i < n; i++)
//	{
//		x = arr[i];
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (x < arr[j])
//			{
//				arr[j + 1] = arr[j];
//			}
//			else
//				break;
//		}
//		arr[j + 1] = x;
//	}
//}
//void Bubble_sort(int arr[N], int n) //冒泡排序
//{
//	int i = 0;
//	int j = 0;
//	for (i = n - 1; i >= 0; i--)
//	{
//		int x = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				x = 1;
//			}
//		}
//		if (x == 1)
//		{
//			break;
//		}
//	}
//}
//Bubble_sort_2(int arr[N], int n)  //快速排序
//{
//	int i = 0;
//	int j = n - 2;
//	int flag = 1;
//	while (flag)
//	{
//		flag = 0;
//		for (i = 0; i <= j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 1;
//			}
//		}
//		j--;
//	}
//
//}
//void Select_sort(int arr[N], int n) //简单选择排序
//{
//	int k = 0;
//	for (k = n - 1; k > 0; k--)
//	{
//		int i = 0;
//		int j = 0;
//		for (j = 1; j <= k; j++)
//		{
//			if (arr[j] > arr[i])
//				i = j;
//			int tmp = arr[k];
//			arr[k] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	menu();
//	int input = 0;
//	do
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			int arr[N];
//			Initboard(arr, N);
//			break;
//		case 2:
//			printf("简单插入排序\n");
//			Sinsert_sort(arr, N);
//			Printboard(arr, N);
//			break;
//		case 3:
//			printf("冒泡排序\n");
//			Initboard(arr, N);
//			Bubble_sort(arr, N);
//			Printboard(arr, N);
//			break;
//		case 4:
//			printf("快速排序\n");
//			Initboard(arr, N);
//			Bubble_sort_2(arr, N);
//			Printboard(arr, N);
//			break;
//		case 5:
//			printf("简单选择排序\n");
//			Initboard(arr, N);
//			Select_sort(arr, N);
//			Printboard(arr, N);
//			break;
//		case 6:
//			printf("退出程序\n");
//			break;
//		}
//	} while (input - 6);
//	return 0;
//}

//#define N 10
//void Initarr(int arr[N], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Printarr(int arr[N], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reversearr(int arr[N], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left++] = arr[right];
//		arr[right--] = tmp;
//	}
//}
//int main()
//{
//	int arr[N];
//	Initarr(arr, N);
//	Printarr(arr, N);
//	Reversearr(arr, N);
//	Printarr(arr, N);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}