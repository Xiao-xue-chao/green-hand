#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//�к��е�����
#define ROW 3
#define COL 3

//����������

//��Ϸ�˵�
void menu();

//��Ϸ��ʵ��
void Initgame(char board[ROW][COL],int row,int col);

//���̵Ĵ�ӡ
void Printboard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);