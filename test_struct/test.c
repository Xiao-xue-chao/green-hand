#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//struct
//{
//	int a;
//	char c;
//}p;
//
//int main()
//{
//	p.a = 4;
//	p.c = 'a';
//	printf("%d %c\n", p.a, p.c);
//	return 0;
//}

struct A
{
	int a : 5;
	int b : 8;
	int c : 10;
	int d : 20;
};

struct S1
{
	char c1;
	int i;
	char c2;
};
//练习2
struct S2
{
	char c1;
	char c2;
	int i;
};
//练习3
struct S3
{
	double d;
	char c;
	int i;
};
//练习4-结构体嵌套问题
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	struct S1 s1 = { 0 };
	struct S1 s2 = { 0 };
	struct S1 s3 = { 0 };
	struct S1 s4 = { 0 };
	struct A a = { 0 };
	a.a = 58;
	a.b = 10;
	a.c = 136;
	a.d = 8947848;

	//printf("%d\n", sizeof(s1));
	//printf("%d\n", sizeof(s2));
	//printf("%d\n", sizeof(s3));
	//printf("%d\n", sizeof(s4));//这里输出什么

	printf("%d\n", sizeof(a));

	return 0;
}
