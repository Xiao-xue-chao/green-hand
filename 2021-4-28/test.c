#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*******   1.  play    ********\n");
	printf("*******   0.  exit    ********\n");
	printf("******************************\n");
}
void game()
{
	//��������
	char board[ROW][COL];
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//�������
	Playermove(board, ROW, COL);
	Displayboard(board, ROW, COL);
	//��������
	Computermove(board, ROW, COL);
}
int main()
{
	menu();
	int input = 0;
	do
	{
		printf("������ >");
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
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}