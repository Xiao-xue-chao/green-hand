#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//������
void game()
{
	char board[ROW][COL];
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Printboard(board, ROW, COL);
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);
		Printboard(board, ROW, COL);
		Iswin(board, ROW, COL);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("������1��0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�뿪��Ϸ\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}