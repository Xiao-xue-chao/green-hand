#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//三子棋
void game()
{
	char board[ROW][COL];
	//初始化数组
	Initboard(board, ROW, COL);
	//打印数组
	Printboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
        
		//电脑下棋
		Computermove(board, ROW, COL);
		Printboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	Printboard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("请输入1或0:>");
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
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}