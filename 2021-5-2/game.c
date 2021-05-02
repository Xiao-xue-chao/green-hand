#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

void Display(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	printf("--------------É¨À×ÓÎÏ·---------------\n");
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row; j++)
		{

		}
	}

}