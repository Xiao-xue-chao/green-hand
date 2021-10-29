#define _CRT_SECURE_NO_WARNINGS 1

// SeqList.h
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;       //可以随时修改变量

typedef struct SeqList
{
	SLDateType* a;
	size_t size;      //有效数据的大小
	size_t capacity;  //空间容量的大小  // typedef unsigned int size_t
}SeqList;

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps);   //初始化结构体
void SeqListDestory(SeqList* ps); //结构体销毁

//结构体打印
void SeqListPrint(SeqList* ps);

//尾部插入
void SeqListPushBack(SeqList* ps, SLDateType x); 

//头部插入
void SeqListPushFront(SeqList* ps, SLDateType x); 

//头部删除
void SeqListPopFront(SeqList* ps);  

//尾部删除
void SeqListPopBack(SeqList* ps);   



// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);

// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);

// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos);