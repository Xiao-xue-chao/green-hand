#define _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"

// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}
// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_capacity == ps->_top)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		Stack* tmp = (Stack*)realloc(ps->_a, sizeof(Stack*) * newcapacity);
		ps->_a = tmp;
		ps->_capacity = newcapacity;
	}
	ps->_top = data;
	ps->_top++;
}
// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps);
	if (ps->_top == 0)
		return;
	ps->_top--;
}
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty); //StackEmpty == 1ʱ���ǿգ�����Ҫ�ж����ǿգ����Լ��ˣ�
	return ps->_a[ps->_top - 1];

}
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == 0;
}
// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_capacity = 0;
	ps->_top = 0;
}


