#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int i,j,a[10],k,x;
	printf("������10�����������ƶ��ĸ���\n");
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
	}                             //���������ƶ�k
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");               //ʱ�临�Ӷ�O��k*n�� 
	//for (i = k; i >= 0; i--)       //���Ҳ��ֵߵ�
	//	printf("%d ", a[i]);
	//for (i = 9; i > k; i--)
	//	printf("%d ", a[i]);
	//printf("\n");
	//for (i = 9; i >= 0; i--)
	//	printf("%d ", a[i]);



	return 0;
}