#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("******     1.play    *******\n");
	printf("******     0.exit    *******\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化数组
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印数组
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	SetBoard(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("请选择1或0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}