#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//���ŵĶ���
#define ROW 3   //��
#define COL 3   //��


//��������

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void Displayboard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);