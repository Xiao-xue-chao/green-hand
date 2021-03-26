#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListInit(SL s)
{
	/*s.size = 0;
	s.a = NULL;
	s.capacity = 0;*/
	s.a =(SLDateType*)malloc(sizeof(SLDateType) * 4);
	if (s.a == 0)
	{
		printf("…Í«Îƒ⁄¥Ê ß∞‹");
		exit(-1);
		s.a = 0;
		s.capacity = 4;
	}
}

void SeqListPushBack(SL* ps, SLDateType);//Œ≤≤ÂŒ≤…æ
void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, SLDateType);//Õ∑≤ÂÕ∑…æ
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps, int pos, SLDateType);//÷–º‰≤Â»Î…æ≥˝
void SeqListErase(SL* ps, int pos);

