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
		printf("�����ڴ�ʧ��");
		exit(-1);
		s.a = 0;
		s.capacity = 4;
	}
}

void SeqListPushBack(SL* ps, SLDateType);//β��βɾ
void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, SLDateType);//ͷ��ͷɾ
void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps, int pos, SLDateType);//�м����ɾ��
void SeqListErase(SL* ps, int pos);

