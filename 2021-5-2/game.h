#pragma once

//ͷ�ļ��İ���
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//����������

//��ʼ������
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret);

//��ӡ����
void Display(char board[ROWS][COLS], int rows, int cols);