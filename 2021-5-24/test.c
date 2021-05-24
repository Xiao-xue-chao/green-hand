#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int i = 0;
	int sum = 0;
	for (i = 1; i <= b; i++)
	{
		sum += a;
		a = a * 10 + a % 10;
	}
	printf("%d", sum);
	return 0;
}

//void print_arr(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *str++);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	return 0;
//}

//void swap1(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//void swap2(int* a, int* b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap1(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	swap2(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}
//
//int output_number_bin_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		while (((a >> i) & 1) == 1)
//		{
//			count++;
//			break;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = output_number_bin_one(a);
//	printf("%d", b);
//	return 0;
//}

//void print_even_number(int a)    //Å¼Êý
//{
//	int i = 31;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//}
//void print_uneven_number(int a)  //ÆæÊý
//{
//	int i = 30;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_even_number(a);
//	print_uneven_number(a);
//	return 0;
//}