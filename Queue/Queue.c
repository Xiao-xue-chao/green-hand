#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}

//申请节点
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

// 队尾入队列 
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

// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty);
	QNode* cur = q->_front;
	QNode* next = cur->_next;
	free(cur);
	q->_front = next;
}

// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(QueueEmpty);
	QNode* cur = q->_front;
	return cur->_data;
}

// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty);
	QNode* cur = q->_rear;
	return cur->_data;
}
// 获取队列中有效元素个数 
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
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}
// 销毁队列 
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