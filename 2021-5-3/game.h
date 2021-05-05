#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


//函数的声明

//初始化函数
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret);

//打印函数
void Displayboard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetBoard(char board[ROWS][COLS], int row, int col);

//查找雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);