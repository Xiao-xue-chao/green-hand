#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 12; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6 };
//	int* parr = arr;
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	for (a = 0; a < count; a++)
//		printf("1");
//	printf("\n");
//	for (a = 0; a < 32 - count; a++)
//		printf("0");
//	printf("\n");
//	
//	return 0;
//}
//int Difference(int x, int y)
//{
//	int c = x ^ y;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int count = Difference(a, b);
//	printf("%d\n", count);
//	return 0;
//}