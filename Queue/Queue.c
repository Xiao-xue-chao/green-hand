#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}

//����ڵ�
QNode* BuyNewnode(QDataType data)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newNode->_data = data;
	newNode->_next = NULL;
	return newNode;
}

// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* newNode = BuyNewnode(data);
	if (q->_front == NULL)
	{
		q->_front = q->_rear = newNode;
	}
	else
	{
		q->_rear->_next = newNode;
		q->_rear = newNode;
	}
}

// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty);
	QNode* cur = q->_front;
	QNode* next = cur->_next;
	free(cur);
	q->_front = next;
}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(QueueEmpty);
	QNode* cur = q->_front;
	return cur->_data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty);
	QNode* cur = q->_rear;
	return cur->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	int num = 0;
	while (cur)
	{
		num++;
		cur = cur->_next;
	}
	return num;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}
// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	while (cur)
	{
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = NULL;
	q->_rear = NULL;
}