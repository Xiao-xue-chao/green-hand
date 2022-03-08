#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdio.h>
//
//namespace bit // 定义个命名空间域
//{
//	// 定义变量/函数/类型
//	int rand = 10;
//
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//	// 命名空间可以嵌套定义
//	namespace dy
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//
//namespace cpp
//{
//	int rand = 100;
//}
//
//int main()
//{
//	int a = 1;
//	printf("%p\n", rand);
//	printf("%d\n", bit::rand);
//	printf("%d\n", cpp::rand);
//
//	bit::Add(1, 2);
//
//	struct bit::Node node1;
//
//	bit::dy::Sub(1, 2);
//
//	struct bit::Stack st;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Student
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	// 自动识别类型
//	char ch = 'A';
//	int i = 10;
//	int* p = &i;
//	double d = 1.111111;
//
//	// 自动识别变量得类型
//	cout << ch << endl;
//	cout << i << endl;
//	cout << p << endl;
//	cout << d << endl;
//
//	// 类似下面得场景用printf更好用一些
//	// 建议C++中，不用纠结到底要用哪个，哪个好用用哪个
//	struct Student s = { "张三", 18 };
//	cout << "名字:" << s.name << " " << "年龄:" << s.age << endl;
//	printf("名字:%s 年龄:%d\n", s.name, s.age);
//
//	printf("%.2f\n", d);
//
//	return 0;
//}

#include<iostream>
using namespace std;

namespace xxc
{
	int rand = 0;
}
int main()
{
	cout << xxc::rand;
	return 0;
}

