#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLDateType;
#define N 10
//顺序表，有效数字在数组中必须是连续的
typedef struct SeqList
{
	//静态顺序表
	//SLDateType a[N];//这个太戳了
	//动态
	SLDateType* a;
	int capacity;   //容量
	SLDateType size;//有效数据的个数
}SL,SeqList;

void SeqListInit(SL s);

void SeqListPushBack(SL* ps,SLDateType);//尾插尾删
void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps,SLDateType);//头插头删
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps,int pos,SLDateType);//中间插入删除
void SeqListErase(SL* ps, int pos);



