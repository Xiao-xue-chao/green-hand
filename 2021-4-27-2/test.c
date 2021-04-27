#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int mian()
{
	int input = 0;
	do
	{
		//menu();
		printf("请输入->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			break;
		case 0:
			printf("离开游戏\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}