#pragma once

#include"question.h"


void BubbleSort(int* arr, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int CharacterNumber(int num)
{
	int i = 0;
	int n = 0;
	for (i = 1; i <= num; i++)
	{
		int j = i;
		while (j)
		{
			if (j % 10 == 2)
			{
				n++;
			}
			j /= 10;
		}
	}
	return n;
}

int FactorNumber(int num)
{
	//����׳˺�Ľ��
	//��1���������ʼ���
	//������������n��2
	//
	//

}