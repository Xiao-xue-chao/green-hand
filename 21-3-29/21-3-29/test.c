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
	char* p;   //��ŵ�ַ
};

int main()
{
	int arr[] = { "hello world" };
	struct T t = { "����",{100,"үү","Ů"},arr};
	printf("%s\n", t.name);
	printf("%d\n", t.s.a);
	return 0;
}

//�ṹ�壺�����������
//һ��ѧ��������
//          �绰
//          ����
//          �Ա�
//������������������

//struct �ṹ��ؼ���  stu�����ṹ���ǩ  struct stu�����ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;               //����һ���ṹ�壬��ռ�ÿռ䣬����¥����ͼֽ����ռ��
//	char tele[12];
//	char sex[5];
//}s1; s2;s3;              //s1,s2,s3������ȫ�ֵĽṹ�����
//�ṹ�廹������������
//typedef struct Stu
//{
//	char name[20];
//	short age;               //����һ���ṹ�壬��ռ�ÿռ䣬����¥����ͼֽ����ռ��
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{                   //��ʼ���ṹ��
//	struct Stu s1 = {"����",99,"15569684456","��"}; //s�Ǿֲ��Ľṹ�����
//	Stu s2 = {"����",23,"15487654","����"};         //��������typedef ����ֱ����Stu
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