#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		SListNode* newnode = BuySListNode(x);
		*pplist = newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next)
		{
			tail = tail->next;
		}
		SListNode* newnode = BuySListNode(x);
		tail->next = newnode;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopFront(SListNode** pplist)
{
	assert(pplist);//plist有地址，不能为空
	assert(*pplist);//链表不能为空

	SListNode* oldhead = *pplist;
	*pplist = oldhead->next;
	free(oldhead);
	//oldhead->next = NULL;
}

void SListPopBack(SListNode** pplist)
{
	assert(pplist);

	//1.暴力处理空链表
	assert(*pplist);  //链表为空不能在尾删
	//2.温和处理
	/*if (*pplist == NULL)
	{
		return;
	}*/

	//单个节点
	if (*pplist == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	//多个节点
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
		return *pplist;
	}
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* newhead = plist;
	while (newhead)
	{
		if (newhead->data = x)
		{
			return newhead;
		}
		else
			newhead = newhead->next;
	}
	return NULL;

}

//向后插入比较方便，因为单链表可以根据当前节点找到下一个节点
//不能通过当前节点找到上一个节点
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	//这种放法很好的处理了尾插的情况，即使是尾插
	//最后一个节点储存的地址也是NULL
}

//单向链表下一个节点好找，上一个节点不好找
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	
	//当前节点的下一个节点必须存在
	assert(pos->next);

	SListNode* erase = pos->next;
	pos->next = erase->next;

	free(erase);
	//erase->next = NULL;
}

void SListDestory(SListNode** pplist)
{
	assert(pplist);

	SListNode* cur = *pplist;

	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		//cur->next = NULL;
		cur = next;
	}
	*pplist = NULL;
}