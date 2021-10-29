#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"

ListNode* ListCreate()
{
	ListNode* phead = (ListNode*)malloc(sizeof(ListNode));
	if (phead == NULL)
	{
		printf("malloc false\n");
		exit(-1);
	}
	phead->_next = NULL;
	phead->_prev = NULL;
	return phead;
}

void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* curHead = pHead->_next;
	printf("<->");
	while (curHead != pHead)
	{
		printf("%d<->", curHead->_data);
		curHead = curHead->_next;
	}
	printf("\n");
}

void ListDestory(ListNode* pHead)
{
	assert(pHead);
	ListNode* curHead = pHead->_next;
	while (curHead != pHead)
	{
		ListNode* next = curHead->_next;
		free(curHead);
		curHead = next;
	}
	free(pHead);
}

