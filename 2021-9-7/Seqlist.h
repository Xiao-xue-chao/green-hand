#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>

////��̬˳���
//typedef int SQDateType;
//#define N 100
//
//typedef struct Seqlist
//{
//	SQDateType a[N];
//	int size;
//}SLT;

//��̬˳���
typedef int SQDateType;

typedef struct Seqlist
{
	SQDateType* a;
	int size;          //��Ч�����ݴ�С
	int capacity;      //�ռ�����
}SLT;
