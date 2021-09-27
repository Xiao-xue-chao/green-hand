#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int a = 0;
    int b = 0;
    if (numsSize == 0)
        return 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[b] == val)
        {
            b++;
        }
        else
        {
            nums[a++] = nums[b++];
        }
    }
    return a + 1;
}

int removeDuplicates(int* nums, int numsSize) {
    int a = 0;
    int b = 1;
    for (b = 1; b < numsSize; b)
    {
        if (nums[a] == nums[b])
        {
            b++;
        }
        else
        {
            nums[++a] = nums[b++];
        }
    }
    return a;
}

void print_arr(int* nums, int a)
{
    int i = 0;
    for (i = 0; i < a; i++)
    {
        printf("%d ", nums[i]);
    }
}

int main()
{
    int nums[4] = { 1,1,2,3 };
    //removeElement(nums, 4, 3);
    removeDuplicates(nums,4);
    print_arr(nums, 3);
	return 0;
}