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
	char mine[ROWS][COLS] = '0';//��Ų����׵���Ϣ
	char show[ROWS][COLS] = '0';//����Ų��׵���Ϣ
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	Displayboard(mine, ROWS, COLS);
	Displayboard(show, ROWS, COLS);
}
int main()
{
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��>");
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