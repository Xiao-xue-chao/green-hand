#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int My_strlen(char* arr)
{
	arr;
	if (*arr != '\0')
	{
		return 1 + My_strlen(arr + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[20] = "bit";
	printf("%d\n",My_strlen(arr));
	return 0;
}

//void Multiple_table(int i)
//{
//	int j = 0;
//	for (j = 1; j <= i; j++)
//	{
//		int k = 0;
//		for (k = 1; k <= j; k++)
//		{
//			printf("%d*%d=%-3d", k, j, j * k);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Multiple_table(i);
//	return 0;
//}

//void Exchange(int* pa, int* pb)
//{
//	int c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	Exchange(&a, &b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}

//int is_prime(int i)
//{
//	return ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));
//}
//
//int main()
//{
//	int i = 0;
//	//int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			//count++;
//			printf("%d ", i);
//		}
//	}
//	//printf("\n%d\n", count);
//	return 0;
//}

//void Printf(int i)
//{
//	 if (i > 9)
//	 {
//		Printf(i / 10);
//	 } 
//	 printf("%d ", i % 10);
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u", &i);
//	Printf(i);
//	return 0;
//}