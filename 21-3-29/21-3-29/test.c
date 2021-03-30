#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct S
{
	int a;
	char name[20];
	char sex[5];
};

struct T
{
	char name[10];
	struct S s;
	char* p;   //存放地址
};

int main()
{
	int arr[] = { "hello world" };
	struct T t = { "儿子",{100,"爷爷","女"},arr};
	printf("%s\n", t.name);
	printf("%d\n", t.s.a);
	return 0;
}

//结构体：描述多个数据
//一个学生的姓名
//          电话
//          年龄
//          性别
//。。。。。。。。。

//struct 结构体关键字  stu——结构体标签  struct stu——结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;               //定义一个结构体，不占用空间，类似楼房的图纸，不占地
//	char tele[12];
//	char sex[5];
//}s1; s2;s3;              //s1,s2,s3是三个全局的结构体变量
//结构体还可以这样定义
//typedef struct Stu
//{
//	char name[20];
//	short age;               //定义一个结构体，不占用空间，类似楼房的图纸，不占地
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{                   //初始化结构体
//	struct Stu s1 = {"张三",99,"15569684456","男"}; //s是局部的结构体变量
//	Stu s2 = {"李四",23,"15487654","不详"};         //这里用了typedef 可以直接用Stu
//	return 0;
//}

//int My_ret(int i,int k)
//{
//	if (i > 0)
//	{
//
//	}
//}
//
//int main()
//{
//	int i, k;
//	scanf("%d%d", &i, &k);
//	int ret = My_ret(i,k);
//	return 0;
//}

//int My_sum(unsigned int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + My_sum(x / 10);
//	}
//	else
//		return x;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int sum = My_sum(a);
//	printf("%d\n", sum);
//	return 0;
//}