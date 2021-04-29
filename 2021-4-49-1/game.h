#pragma once

//头文件引用
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//行和列的数量
#define ROW 3
#define COL 3

//函数的声明

//游戏菜单
void menu();

//游戏的实现
void Initgame(char board[ROW][COL],int row,int col);

//棋盘的打印
void Printboard(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);