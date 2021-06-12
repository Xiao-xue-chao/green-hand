#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int arr[] = { 0,2,4,6,5,4,3,2,1,7,9,3 };
	int sz = sizeof(arr);
	my_sort(arr, sz);
	return 0;
}

//int my_purchase(int x)
//{
//	int sum = 0;//总计喝的瓶数
//	int y = 0;//总计当前空瓶的个数
//	while (1)
//	{
//		sum += x;
//		y = x;
//		
//		while (y > 1)
//		{
//			if (y % 2 == 0)
//			{
//				y /= 2;
//				sum += y;
//			}
//			else
//			{
//				sum += y / 2;
//				y = y / 2 + 1;
//			}
//		}
//		break;
//	}
//	return sum;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int sum = my_purchase(input);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}


 //方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}