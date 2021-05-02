#pragma once

//头文件的包含
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//函数的声明

//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char ret);

//打印棋盘
void Display(char board[ROWS][COLS], int rows, int cols);