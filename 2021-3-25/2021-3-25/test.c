#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"SeqList.h"

//≤‚ ‘Õ∑…æŒ≤…æ
void TestSeqLIst1()
{
	SeqList s;
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);

}

int main()
{
	TestSeqLIst1();

	return 0;
}