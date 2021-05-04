#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define N 10
void Initarr(int arr[N], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[N], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int* arr[N],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int tmp = arr[i];
		*arr[i] = *arr[n - 1 - i];
		*arr[n - i - 1] = tmp;
	}
}
int main()
{
	int arr[N];
	Initarr(arr, N);
	Print(arr, N);
	int i = 0;
	for (i = 0; i < N; i++)
	{
		arr[i] = i;
	}
	Print(arr, N);
	reverse(arr, N);
	Print(arr, N);
	return 0;
}

//
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(arr + 1);
//}
//void  reverse_string(char* arr)
//{
//	char tmp = *arr;
//	int ret = my_strlen(arr);
//	*arr = arr[ret - 1];
//	arr[ret - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[ret - 1] = tmp;
//}
//int main()
//{
//	char arr[20] = "0";
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10] = { 10, 9, 8, 7,6 ,5 ,4 ,3 ,2 ,1 };
//	for (i = 9; i >= 0; i--)
//	{
//		int flag = 0;
//		for (j = 0; j <= i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int arr2 = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = arr2;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int My_strlen(char* str2)
//{
//	if (*str2 == '\0')
//		return 0;
//	else
//		return 1 + My_strlen(str2 + 1);
//}
//int main()
//{
//	char arr2[20] = "0";
//	scanf("%s", arr2);
//	printf("%d", My_strlen(arr2));
//	return 0;
//}
