#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void SListTest1()
{

	SListNode* n1 = (SListNode*)malloc(sizeof(SListNode));
	n1->data = 1;

	SListNode* n2 = (SListNode*)malloc(sizeof(SListNode));
	n2->data = 2;

	SListNode* n3 = (SListNode*)malloc(sizeof(SListNode));
	n3->data = 3;

	SListNode* n4 = (SListNode*)malloc(sizeof(SListNode));
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	SListNode* plist = n1;

	SListPrint(plist);
}

void SLisTest2()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPushFront(&plist, 0);
	SListPrint(plist);

}

int main()
{
	//SListTest1();
	SLisTest2();
	return 0;
}