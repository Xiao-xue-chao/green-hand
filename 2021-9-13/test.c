#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int removeElement(int* nums, int numsSize, int val)
//{
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            for (int j = i; j < numsSize; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            numsSize--;
//            i--;
//        }
//    }
//    return numsSize;
//}

int removeElement(int* nums, int numsSize, int val) {
    int a = 0;
    int b = numsSize - 1;
    while (a < b)
    {
        if (nums[a] != val)
        {
            a++;
        }
        if (nums[b] == val)
        {
            b--;
        }
        if (nums[b] != val && nums[a] == val)
        {
            nums[a++] = nums[b--];
        }
    }
    return a + 1;
}

void Printarr(int arr[], int ret)
{
    int i = 0;
    for (i = 0; i < ret; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = { 3,2,2,3 };
    removeElement(arr, 4, 3);
    Printarr(arr, 5);
    return 0;
}