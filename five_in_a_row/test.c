#define _CRT_SECURE_NO_WARNINGS 1
#include"gime.h"

void menu()
{
	printf("****************************\n");
	printf("*******   1.play   *********\n");
	printf("*******   0.exit   *********\n");
	printf("****************************\n");
}

void game()
{

	char show[ROWS][COLS] = { 0 }; //��ʾ����
	char mine[ROWS][COLS] = { 0 }; //�����׵�����

	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//������
	SetMine(mine, ROW, COL);

	//��ӡ����
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			//printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�뿪��Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}	
	} while (input);
	return 0;
}