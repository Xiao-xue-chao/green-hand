#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct linknode
{
	int date;
	struct linknode* next;
}LISTNODE, * LISTNODEPTR;
int main()
{
	int arr1[] = { 0,2,4,6 };
	int arr2[] = { 1,3,5,7,9 };

	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	LISTNODEPTR ha, hb, hc;
	return 0;
}