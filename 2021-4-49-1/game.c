#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("*******  1.play  ******\n");
	printf("*******  0.exit  ******\n");
	printf("***********************\n");
}
void Initgame(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{

				printf("___");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("������Ҫ�ߵ�����\n");
	printf("����ߣ�>");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i <= row && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("�ô��������ӣ���������:>\n");
		}
		else
			printf("������Χ������������\n");
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�>\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
