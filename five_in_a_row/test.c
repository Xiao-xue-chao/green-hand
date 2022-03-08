#define _CRT_SECURE_NO_WARNINGS 1
#include"gime.h"

void menu()
{
	printf("****************************\n");
	printf("*******   1.play   *********\n");
	printf("*******   0.exit   *********\n");
	printf("****************************\n");
}

void game()
{

	char show[ROWS][COLS] = { 0 }; //显示棋盘
	char mine[ROWS][COLS] = { 0 }; //布置雷的棋盘

	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//布置雷
	SetMine(mine, ROW, COL);

	//打印棋盘
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			//printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("离开游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}	
	} while (input);
	return 0;
}