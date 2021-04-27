#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//三子棋
void game()
{
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board,ROW,COL);

}
void menu()
{
	printf("******************************\n");
	printf("******     1.  play     ******\n");
	printf("******     0.  exit     ******\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("请输入->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("离开游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}