#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void menu()
{
	printf("*********************************\n");
	printf("******** 1.Add    2.Sub *********\n");
	printf("******** 3.Mul    4.Div *********\n");
	printf("********     0.exit     *********\n");
	printf("*********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		int x = 0;
		int y = 0;
		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//����ָ������
		printf("��������������>\n");
		scanf("%d %d", &x, &y);
		int ret = (pfArr[input])(x, y);
		printf("%d\n", ret);
	} while (input);
	return 0;
}

//void menu()
//{
//	printf("*********************************\n");
//	printf("******** 1.Add    2.Sub *********\n");
//	printf("******** 3.Mul    4.Div *********\n");
//	printf("********     0.exit     *********\n");
//	printf("*********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 1;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		switch (input)
//		{
//		case 1:
//			printf("��������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("�����%d\n",Add(x, y));
//			break;
//		case 2:
//			break; printf("��������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("�����%d\n", Sub(x, y));
//		case 3:
//			break; printf("��������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("�����%d\n", Mul(x, y));
//		case 4:
//			break; printf("��������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("�����%d\n", Div(x, y));
//		case 0:
//			printf("����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}