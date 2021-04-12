#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int i,j,a[10],k,x;
	printf("请输入10个数和向右移动的个数\n");
	for (i = 0; i <= 9; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	scanf_s("%d",&k);
	printf("\n");
	for (i = 1; i <= k; i++)
	{
		x = a[9];
		for (j = 8; j >= 0; j--)
			a[j + 1] = a[j];
		a[0] = x;
	}                             //数组向右移动k
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");               //时间复杂度O（k*n） 
	//for (i = k; i >= 0; i--)       //左右部分颠倒
	//	printf("%d ", a[i]);
	//for (i = 9; i > k; i--)
	//	printf("%d ", a[i]);
	//printf("\n");
	//for (i = 9; i >= 0; i--)
	//	printf("%d ", a[i]);



	return 0;
}