#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (i % j == 0)
				printf("%d ", i);
		}
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = a % b;
//	while( c )
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;		
//	int tep = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b < c)
//	{
//		tep = b;
//		b = c;
//		c = tep;
//	}
//	if (a < b)
//	{
//		tep = a;
//		a = b;
//		b = tep;
//	}
//	if (b < c)
//	{
//		tep = b;
//		b = c;
//		c = tep;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 2 == 1)
//	{
//		printf("ÆæÊý");
//	}
//	else
//		printf("Å¼Êý");
//	return 0;
//}

