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
	assert(pplist);//plist�е�ַ������Ϊ��
	assert(*pplist);//������Ϊ��

	SListNode* oldhead = *pplist;
	*pplist = oldhead->next;
	free(oldhead);
	//oldhead->next = NULL;
}

void SListPopBack(SListNode** pplist)
{
	assert(pplist);

	//1.�������������
	assert(*pplist);  //����Ϊ�ղ�����βɾ
	//2.�ºʹ���
	/*if (*pplist == NULL)
	{
		return;
	}*/

	//�����ڵ�
	if (*pplist == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	//����ڵ�
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

//������ȽϷ��㣬��Ϊ��������Ը��ݵ�ǰ�ڵ��ҵ���һ���ڵ�
//����ͨ����ǰ�ڵ��ҵ���һ���ڵ�
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	//���ַŷ��ܺõĴ�����β����������ʹ��β��
	//���һ���ڵ㴢��ĵ�ַҲ��NULL
}

//����������һ���ڵ���ң���һ���ڵ㲻����
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	
	//��ǰ�ڵ����һ���ڵ�������
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