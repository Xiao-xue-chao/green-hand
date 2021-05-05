  #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include <stdio.h>
#include <malloc.h>
#define N 5

void Insert(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void Input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n  ");
}

void Sinsert(int a[], int n)
{
	int i, j, x;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		for (j = i - 1; j >= 0 && x < a[j]; j = j - 1) a[j + 1] = a[j];
		a[j + 1] = x;
		Input(a, N);
	}
}

void bubble_sort(int a[], int n)
{
	int i, j, x, flat = 1;
	j = n - 2;
	while (flat)
	{
		flat = 0;
		for (i = 0; i <= j; i++)
			if (a[i] > a[i + 1])
			{
				x = a[i], a[i] = a[i + 1], a[i + 1] = x;
				Input(a, n);
				flat = 1;
			}
		j--;
	}
}

void partition(int a[], int s, int t, int* k)
{
	int i, j, x;
	x = a[s];
	i = s; j = t;
	do
	{
		while ((a[j] >= x) && (i < j))j--;
		if (i < j)a[i++] = a[j];
		while ((a[i] < x) && (i < j))i++;
		if (i < j)a[j--] = a[i];
	} while (i < j);
	a[i] = x;
	*k = i;
	Input(a, 5);
}

void qksort(int a[], int i, int j)
{
	int k, n = j - i + 1;
	if (i < j)
	{
		partition(a, i, j, &k);

		qksort(a, i, k - 1);
		qksort(a, k + 1, j);

	}

}

void SelectSort(int a[], int n)
{
	int i, j, t;
	for (i = 1; i <= 4; i++)
		for (j = i + 1; j <= 4; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			Input(a, n);
		}

}


void showMenu()
{
	int i;
	printf("------------------------");
	printf("\t欢迎使用本排序系统\t");
	printf("------------------------\n");
	printf("\t");
	for (i = 0; i < 100; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("\t1—输入整数序列\n");
	printf("\t 2—简单插入排序\n");
	printf("\t3—冒泡排序\n");
	printf("\t 4—快速排序\n");
	printf("\t 5—简单选择排序\n");
	printf("\t6—退出程序\n");

	for (i = 0; i < 4; i++)
	{
		printf("\t");
	}
	printf("\n");
	printf("\t");
	for (i = 0; i < 100; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("------------------------");
	printf("------------------------\n");
	printf("请按所需输入菜单编号:");
}
int  main()
{
	int i = 1;
	int a[5];

	while (1)
	{
		showMenu();
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			printf("输入整数序列：\n");
			Insert(a, N);
			break;

		case 2:
			Sinsert(a, N);
			break;
		case 3:
			bubble_sort(a, N);
			break;
		case 4:
			qksort(a, 0, N - 1);
			break;
		case 5:
			SelectSort(a, N);
			break;

		case 6:

			return 0;
		}
	}
}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += i;
//	}
//	return 0;
//}