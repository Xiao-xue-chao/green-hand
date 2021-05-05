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
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	SetBoard(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��1��0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}