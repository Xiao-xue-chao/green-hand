#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Initboard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[row][col] = ' ';
		}
	}
}