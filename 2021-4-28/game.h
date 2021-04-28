#pragma once

//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//符号的定义
#define ROW 3   //行
#define COL 3   //列


//函数声明

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);

//1. 玩家赢了 - *
//2. 电脑赢了 - #
//3. 平局 - Q
//4. 游戏继续 - C

//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col);