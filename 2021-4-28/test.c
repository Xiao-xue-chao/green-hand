#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*******   1.  play    ********\n");
	printf("*******   0.  exit    ********\n");
	printf("******************************\n");
}
void game()
{
	//储存数组
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	//玩家下棋
	Playermove(board, ROW, COL);
	Displayboard(board, ROW, COL);
	//电脑下棋
	Computermove(board, ROW, COL);
}
int main()
{
	menu();
	int input = 0;
	do
	{
		printf("请输入 >");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("离开游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}