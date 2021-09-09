#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S
{
	//char c;
	int a;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}