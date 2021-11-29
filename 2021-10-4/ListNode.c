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

void ListDestory(ListNode** pHead)
{
	assert(pHead);
	assert(*pHead);
	ListNode* curHead = (*pHead)->_next;
	while (curHead != *pHead)
	{
		ListNode* next = curHead->_next;
		free(curHead);
		curHead = next;
	}
	free(*pHead);
	*pHead = NULL;
}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	ListNode* newNode = ListCreate();
	newNode->_data = x;
	ListNode* lastNode = pHead->_prev;
	lastNode->_next = newNode;
	newNode->_prev = lastNode;
	newNode->_next = pHead;
	pHead->_prev = newNode;
}

void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next);
	ListNode* cur = pHead->_prev->_prev;
	free(cur->_next);
	cur->_next = pHead;
	pHead->_prev = cur;
}

void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* newNode = ListCreate();
	newNode->_data = x;
	newNode->_next = pHead->_next;//ֱ�Ӱ�ͷ�ڵ����һ���ڵ��ַ�浽�½ڵ�
	pHead->_next = newNode;
	newNode->_next->_prev = newNode;  //�½ڵ����һ���ڵ��prevָ���½ڵ�
	newNode->_prev = pHead;
}

void ListPopFront(ListNode* pHead)
{
	assert(pHead);

	ListNode* cur;
	cur = pHead->_next;
	pHead->_next = cur->_next;
	cur->_next->_prev = pHead;

	free(cur);
}

ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if(cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newNode = ListCreate();
	newNode->_data = x;
	pos->_prev->_next = newNode; //pos����һ���ڵ��next��newNode
	newNode->_next = pos;    
	newNode->_prev = pos->_prev;  //��ʱpos->_prev��û���ı�
	pos->_prev = newNode;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	pos->_prev->_next = pos->_next;
	pos->_next->_prev = pos->_prev;
	free(pos);
}