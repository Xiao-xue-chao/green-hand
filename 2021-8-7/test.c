#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//	/*实现一个函数，可以左旋字符串中的k个字符。
//	例如：
//	ABCD左旋一个字符得到BCDA
//	ABCD左旋两个字符得到CDAB*/
//
//void reversed_order(char c[],int k,int sz)
//{
//	int i = 0;
//	while (i < k)
//	{
//		char tmp = c[i];
//		c[i] = c[k];
//		c[k] = tmp;
//	}
//}
//
//int main()
//{
//	char c[10] = "0";
//	printf("请输入字符串\n");
//	scanf("%s", c);
//	int sz = strlen(c);
//	printf("请输入左移的个数\n");
//	int k = 0;
//	scanf("%d", &k);
//	k = k % sz;
//	reversed_order(c, k - 1, sz);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if (
//			(murder[0] == 0) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] == 0) == 3
//			)
//		{
//			printf("罪犯是%c\n", 'A' + i);
//			break;
//		}
//		murder[i] = 0;
//	}
//	//putchar('A' + i);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (
							((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1)
							)
						{
							if (a * b * c * d * e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}

					}
				}
			}
		}
	}
	return 0;
}