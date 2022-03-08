#define _CRT_SECURE_NO_WARNINGS 1
#include"gime.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	i = j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	i = j = 0;
	printf("****************扫雷游戏******************");
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (j = 1; j < col; j++)
	{
		printf("%d ", j);
		for (i = 1; i < row; i++)
		{
			printf("%c ", board[j][i]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int cow, int rol)
{
	return mine[cow - 1][rol - 1]
		+ mine[cow - 1][rol]
		+ mine[cow - 1][rol + 1]
		+ mine[cow][rol - 1]
		+ mine[cow][rol + 1]
		+ mine[cow + 1][rol - 1]
		+ mine[cow + 1][rol]
		+ mine[cow + 1][rol + 1]
		- 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;

	

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标:");
		scanf("%d%d", &i, &j);

		//判断坐标合理性
		if (i > 0 && i < row && j>0 && j < col)
		{
			if (mine[i][j] == '1')
			{
				printf("What a pity,you dead\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//当前位置不是雷，则返还雷的个数
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("you win\n");
		DisplayBoard(mine, row, col);
	}
}