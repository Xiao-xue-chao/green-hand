#pragma once


//头文件的包含
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//行和列的定义
#define ROW 3
#define COL 3

//函数的定义

//菜单
void menu();

//初始话数组
void Initboard(char board[ROW][COL], int row, int col);

//打印函数
void Printboard(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);

//判断输赢
char Iswin(char board[ROW][COL], int row, int col);

//1. 玩家赢了 - *
//2. 电脑赢了 - #
//3. 平局 - Q
//4. 游戏继续 - C