#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//������
void game()
{
	char board[ROW][COL];
	//��ʼ������
	Initboard(board,ROW,COL);

}
void menu()
{
	printf("******************************\n");
	printf("******     1.  play     ******\n");
	printf("******     0.  exit     ******\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�뿪��Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}