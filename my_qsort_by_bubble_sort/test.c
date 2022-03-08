#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void compare(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void swap(char* e1, char* e2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *(e1 + i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = tmp;
	}
}

void my_qsort( void* base, size_t num, size_t size,             //用冒泡排序的方法简单实现一下
				int (*compare)(const void*, const void*)) //快排怎么排不同类型的数据
{
	int i, j;
	i = j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compare((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
				/*for (int k = 0; k < num; k++)
				{
					char* p = (char*)base + j * size + k;
					((char*)base + j * size + k) = ((char*)base + (j + 1) * size + k);
					((char*)base + (j + 1) * size + k) = p;
				}*/
			}
		}
	}
}

void printf_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void com_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int com_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

struct stu
{
	char name[20];
	int age;
};

int main()
{
	//void qsort (void* base, size_t num, size_t size,
	//             int (*compar)(const void*, const void*)); 
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct stu s[] = { {"zhangsan", 14}, {"lisi", 99}, {"zhaoliu", 50} };
	my_qsort(s, sizeof(s) / sizeof(s[0]), 24, com_by_age);
	my_qsort(s, sizeof(s) / sizeof(s[0]), 24, com_by_name);

	//bubble_sort(arr, sz);
	//qsort(arr, sz, sizeof(arr[0]), compare);
	my_qsort(arr, sz, sizeof(arr[0]), compare);
	printf_arr(arr, sz);
	return 0;
}