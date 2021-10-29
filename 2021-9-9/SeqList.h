#define _CRT_SECURE_NO_WARNINGS 1

// SeqList.h
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;       //������ʱ�޸ı���

typedef struct SeqList
{
	SLDateType* a;
	size_t size;      //��Ч���ݵĴ�С
	size_t capacity;  //�ռ������Ĵ�С  // typedef unsigned int size_t
}SeqList;

// �����ݵĹ���:��ɾ��� 
void SeqListInit(SeqList* ps);   //��ʼ���ṹ��
void SeqListDestory(SeqList* ps); //�ṹ������

//�ṹ���ӡ
void SeqListPrint(SeqList* ps);

//β������
void SeqListPushBack(SeqList* ps, SLDateType x); 

//ͷ������
void SeqListPushFront(SeqList* ps, SLDateType x); 

//ͷ��ɾ��
void SeqListPopFront(SeqList* ps);  

//β��ɾ��
void SeqListPopBack(SeqList* ps);   



// ˳������
int SeqListFind(SeqList* ps, SLDateType x);

// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos);