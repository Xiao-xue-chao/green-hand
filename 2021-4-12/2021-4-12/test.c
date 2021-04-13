#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d",i,j, i * j);
		}
		printf("\n");
	}
	return 0;
}

//#define N 10
////输出10个数中最大的
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[N] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		for(j=)
//	}
//
//	return 0;
//}

//1-1/2+1/3-1/4.......
//int main()
//{
//	int i = 0;
//	double sum = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		double a = 1.0;
//		sum += a / i;
//		a = (-a);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9)||((i / 10) % 10 == 9))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int c = 4;
//	int count = 0;
//	while (c)
//	{
//		c--;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//			else
//			{
//				//count++;
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//	//printf("\n");
//	//printf("%d\n", count);
//	return 0;
//}