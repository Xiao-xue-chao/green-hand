#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//三子棋
void game()
{
	char board[ROW][COL];
	//初始化数组
	Initgame(board, ROW, COL);
	//打印棋盘
	Printboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Printboard(board, ROW, COL);

		//电脑下棋
		Computermove(board, ROW, COL);
		Printboard(board, ROW, COL);

	}
}
int main()
{
	srand((unsigned int)time(NULL));
	menu();
	printf("请选择1或0:>");
	int input = 0;
	do
	{
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}