#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[][3] = { {0,2},{2},{3,4,5} };
	/*char ch[3] = "bit";
	printf("%s\n", ch);
	printf("%d\n", strlen(ch));*/
	return 0;
}

////ì³²¨ÄÇÆõ
//Fib(int i)
//{
//	if (i <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(i - 1) + Fib(i - 2);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n",Fib(i));
//	return 0;
//}
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int sum = 1;
//	while (i > 2)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d",Fib(i));
//	return 0;
//}