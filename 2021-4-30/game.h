#pragma once


//ͷ�ļ��İ���
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//�к��еĶ���
#define ROW 3
#define COL 3

//�����Ķ���

//�˵�
void menu();

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);

//��ӡ����
void Printboard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);

//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C