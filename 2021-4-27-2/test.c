#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int mian()
{
	int input = 0;
	do
	{
		//menu();
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			break;
		case 0:
			printf("�뿪��Ϸ\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}