#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

AdjustUpDown(int* a, int b, int parent)
{
	int child = parent*2 + 1;

}

void HeapSort(int* a, int n)
{
	for (int parent = (n - 1) / 2; parent >= 0; parent--)//ֱ���ص�һ��parent��ʼ����������
	{
		AdjustUpDown(a, n, parent);//һ��ֻ��һ�����׺�����Ӧ���������ӣ�����ɴ��С��

	}


}

int main()
{
	int arr[] = { 27,37,28,18,19,34,65,25,49,15 };
	
	//heap:��
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;

}