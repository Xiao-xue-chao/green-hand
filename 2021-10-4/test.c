#define _CRT_SECURE_NO_WARNINGS 1
#include"ListNode.h"

void ListNodeTest()
{
	ListNode* plist = ListCreate();
	ListNode* n1 = ListCreate();
	ListNode* n2 = ListCreate();
	ListNode * n3 = ListCreate();
	ListNode * n4 = ListCreate();
	ListNode * n5 = ListCreate();

	plist->_next = n1;
	n1->_next = n2;
	n2->_next = n3;
	n3->_next = n4;
	n4->_next = n5;
	n5->_next = plist;

	plist->_prev = n5;
	n1->_prev = plist;
	n2->_prev = n1;
	n3->_prev = n2;
	n4->_prev = n3;
	n5->_prev = n4;

	n1->_data = 1;
	n2->_data = 2;
	n3->_data = 3;
	n4->_data = 4;
	n5->_data = 5;

	ListPrint(plist);
	//ListDestory(&plist);
	ListPushBack(plist, 6);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPushFront(plist, 0);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);


}

int main()
{
	ListNodeTest();
	return 0;
}