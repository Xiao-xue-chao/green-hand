#include<stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	return 0;
}

//#include<stdio.h>
//void swap_arr(int* str, int sz)
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(str + i) % 2 == 1)
//		{
//			arr1[j++] = *(str + i);
//		}
//		else
//		{
//			arr2[j++] = *(str + i);
//		}
//	}
//	for(j=0;j<10;j++)
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}