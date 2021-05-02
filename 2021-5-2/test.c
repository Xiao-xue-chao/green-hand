#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("******     1.play   *******\n");
	printf("*****      0.exit   *******\n");
	printf("***************************\n");
}
void game()
{
	char mine[ROWS][COLS] = '0';//存放布置雷的信息
	char show[ROWS][COLS] = '0';//存放排查雷的信息
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	Displayboard(mine, ROWS, COLS);
	Displayboard(show, ROWS, COLS);
}
int main()
{
	menu();
	int input = 0;
	do
	{
		printf("请选择：>");
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