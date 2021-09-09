#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>

////静态顺序表
//typedef int SQDateType;
//#define N 100
//
//typedef struct Seqlist
//{
//	SQDateType a[N];
//	int size;
//}SLT;

//动态顺序表
typedef int SQDateType;

typedef struct Seqlist
{
	SQDateType* a;
	int size;          //有效的数据大小
	int capacity;      //空间容量
}SLT;
