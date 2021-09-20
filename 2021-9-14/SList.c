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