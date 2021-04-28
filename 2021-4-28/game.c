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
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
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
				printf("___ ");
			}
		}
		printf("\n");
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("�����>:");
	while (1)
	{
		printf("���������µ�����\n");
		scanf("%d %d", &i, &j);
		//�ж���������ĺ�����
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("�ø���ռ�ã����±��λ��\n");
		}
		else
			printf("�����������������\n");
	}
	
}
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
	while (1)
	{

	}
}