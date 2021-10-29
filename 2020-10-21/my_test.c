#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

AdjustUpDown(int* a, int b, int parent)
{
	int child = parent*2 + 1;

}

void HeapSort(int* a, int n)
{
	for (int parent = (n - 1) / 2; parent >= 0; parent--)//直接重第一个parent开始遍历更方便
	{
		AdjustUpDown(a, n, parent);//一次只排一个父亲和他对应的两个儿子，排序成大或小堆

	}


}

int main()
{
	int arr[] = { 27,37,28,18,19,34,65,25,49,15 };
	
	//heap:堆
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;

}