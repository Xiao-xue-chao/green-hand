#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = { "bit" };
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//("%p\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	int* pi = &a;
//	char* pc = &a;
//	printf("%p\n", pi);
//	printf("%p\n", pc);*/
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}