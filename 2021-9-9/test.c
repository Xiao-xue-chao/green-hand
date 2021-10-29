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
	SeqListPrint(&s);
	SeqListInsert(&s, 4, 5);
	SeqListPrint(&s);
	SeqListErase(&s, 5);
	SeqListPrint(&s);

	//SeqListDestory(&s);

	/*SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	int ret = SeqListFind(&s, 4);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
		printf("没找到\n")*/;
}
int main()
{
	SeqListTest1();
	return 0;
}