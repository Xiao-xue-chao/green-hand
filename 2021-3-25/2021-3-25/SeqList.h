#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLDateType;
#define N 10
//˳�����Ч�����������б�����������
typedef struct SeqList
{
	//��̬˳���
	//SLDateType a[N];//���̫����
	//��̬
	SLDateType* a;
	int capacity;   //����
	SLDateType size;//��Ч���ݵĸ���
}SL,SeqList;

void SeqListInit(SL s);

void SeqListPushBack(SL* ps,SLDateType);//β��βɾ
void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps,SLDateType);//ͷ��ͷɾ
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps,int pos,SLDateType);//�м����ɾ��
void SeqListErase(SL* ps, int pos);



