#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SeqListTest1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	//SeqListPrint(&s);

	SeqListDestory(&s);

	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPrint(&s);

}
int main()
{
	SeqListTest1();
	return 0;
}