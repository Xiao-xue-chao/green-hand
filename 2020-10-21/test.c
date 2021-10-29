#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

// ������������������С��/���
void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// ѡ�����Һ�����С or ����Ǹ�
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}

		// 1�����С or ��ĺ��ӱȸ���С or ���򽻻����������µ���
		// 2�����С or �� �ĺ��ӱȸ��״� or С�����������
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			/*parent = child;
			child = parent * 2 + 1;*/
			break;
		}
		else
		{
			break;
		}
	}
}

// ������ -> Ч�ʸ���
// O(N*logN)
void HeapSort(int* a, int n)
{
	// ������-�������   
	// �Ž���-����С��
	// O��N��
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	// O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

//int main()
//{
//	//int a[] = { 4, 2, 5, 7, 9, 3, 0 };
//	//int a[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
//	int a[] = { 27, 37, 28, 18, 19, 34, 65, 25, 49, 15 };
//
//	HeapSort(a, sizeof(a) / sizeof(int));
//
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}