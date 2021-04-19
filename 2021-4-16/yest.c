#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void Prime_number(int a)
{
	int i = 0;
	for (i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
			break;
		else
		{
			printf("%d ", a);
			break;
		}
	}
}
int main()
{
	/*int a = 0;
	scanf("%d", &a);
	Prime_number(a);*/
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		Prime_number(i);
	}
	return 0;
}