#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("������������\n");
	scanf("%d%d", &a, &b);
	int max = Max(a, b);
	printf("max=%d\n",max);
	return 0;
}

//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}
//#include<stdio.h>
//
//enum Sex //ö�ٳ���
//{
//	MAIL,          //����ö��������δ��ȡֵ
//	FAMAIL,        //ֻ������������
//	SECRET
//};
//	int main()
//{
//
//	return 0;
//}