#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



////顺序法储存两数组
//#define M 10
//#define N 5
//int main()
//{
//	int arr1[M] = { 1,3,5,7,9,11,13,15,17 };
//	int arr2[N] = { 0,2,4,6,8 };
//	int arr3[N + M];
//	int m = 0;
//	int n = 0;
//	int k = 0;
//	while (m < M && n < N)
//	{
//		if (arr1[m] < arr2[n])
//		{
//			arr3[k++] = arr1[m++];
//		}
//		else if (arr2[n] < arr1[m])
//		{
//			arr3[k++] = arr2[n++];
//		}
//		else 
//		{
//			arr3[k++] = arr1[m++];
//			n++;
//		}
//	}
//	while (n < M)
//	{
//		arr3[k++] = arr2[n++];
//	}
//	while (m < N)
//	{
//		arr3[k++] = arr1[m++];
//	}
//	
//	printf("%d\n", k);
//	int j = 0;
//	for (j = 0; j <= k; j++)
//	{
//		printf("%d ", arr3[j]);
//	}
//	return 0;
//}

////关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	printf("你的电脑将在60秒后关机，输入：***可解除\n");
//	char password[100] = { 0 };
//	system("shutdown -s -t 60");
//	do 
//	{
//		scanf("%s", &password);
//		printf("请重新输入\n");
//
//	} while (strcmp(password, "***"));
//	system("shutdown -a");
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
////猜数字游戏
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.play 0.exit***\n");
//	printf("*******************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;//范围0-100
//	int x = 0;
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (x > ret)
//		{
//			printf("猜大了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int) time(NULL));//时间戳
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("结束游戏");
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}

////输入密码
//#include<string.h>
//int main()
//{
//	char password[] = "123456";
//	char str[100] = "0";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", str);
//		if (strcmp(str, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出\n");
//	}
//	return 0;
//}