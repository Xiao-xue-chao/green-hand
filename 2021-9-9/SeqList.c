#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ",ps->a[i]);
	}
}
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
	}
	ps->capacity = ps->size = 0;
}
void CheckSeqListCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2; //开始先给4个空间，之后每次扩大一倍
		ps->a = realloc(ps->a, newcapacity * sizeof(SLDateType));
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckSeqListCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
