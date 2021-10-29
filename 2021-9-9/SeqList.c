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
void CheckSeqListCapacity(SeqList* ps)  //检查增容
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

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckSeqListCapacity(ps);
	int count = ps->size;
	ps->size++;
	while (count)
	{
		ps->a[count] = ps->a[count - 1];
		count--;
	}
	ps->a[count] = x;
}

void SeqListPopFront(SeqList* ps)  //头部删除
{
	assert(ps);
	int count = ps->size;
	for (int i = 0; i < count; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SeqListPopBack(SeqList* ps)  //尾部删除
{
	assert(ps);
	ps->size--;
}

int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return 1;
	}
	return 0;
}

void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);
	void CheckSeqListCapacity(SeqList * ps);  //检查增容
	int count = ps->size - pos + 1; //数组需要移动的个数
	int tmp = ps->size;
	while (count--)
	{
		ps->a[tmp] = ps->a[tmp - 1];
		tmp--;
	}
	ps->a[pos - 1] = x;
	ps->size++;
}

void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	int count = ps->size - pos + 1; //数组需要移动的个数
	int tmp = pos;
	while (count--)
	{
		ps->a[tmp - 1] = ps->a[tmp];
		tmp++;
	}
	ps->size--;
}