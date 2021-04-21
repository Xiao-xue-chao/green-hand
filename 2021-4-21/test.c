#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//iµÄ½×³ËµÝ¹é
int Factorial(int i)
{
	/*if (i <= 1)
	{
		return 1;
	}
	else
	{
		return i * Factorial(i - 1);
	}*/
	if (i <= 1)
	{
		return i * Factorial(i - 1);

	}

}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = Factorial(i);
	printf("%d\n", ret);
	return 0;
}
//iµÄ½×³Ë
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int j = 0;
//	int sum = 1;
//	for (j = 1; j <= i; j++)
//	{
//		sum *= j;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

////ì³²¨ÄÇÆõ
//int Fib(int i)
//{
//	if (i <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(i - 2) + Fib(i - 1);
//}
//
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i > 2)
//	{
//		i--;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("%d\n", ret);
//	return 0;
//}