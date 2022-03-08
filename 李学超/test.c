#define _CRT_SECURE_NO_WARNINGS 1

#include"question.h"


void test1()
{
	int arr[N] = { 0 };
	int cur = 0;
	scanf("%d", &cur);
	for (int n = 0; n < cur; n++)
	{
		scanf("%d ", &arr[n]);
	}
	BubbleSort(arr, cur);
	for (int i = 0; i < cur; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	printf("%d",CharacterNumber(20));
	
}
void test3()
{

}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}