#define _CRT_SECURE_NO_WARNINGS 1

int addAB(int A, int B) {
    // write code here
    int ExclusiveOR = A ^ B;
    int add = (A & B) << 1;
    if (add == 0)
        return ExclusiveOR;
    return (add, ExclusiveOR);
}

int main()
{
    addAB(2, 3);
	return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	int num = 0;
//	while (*arr++)
//	{
//		num++;
//	}
//	return num ;
//}
//
//int main()
//{
//	char arr[] = "a";
//	
//	printf("%d %d\n", my_strlen(arr), strlen(arr) );
//	
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//const int* pnum = &num;
//	int const* const pnum = &num;
//	int** ppnum = &pnum;
//	//*pnum = 20;
//	**ppnum = 30;
//	printf("%d ", num);
//	//printf("%d\n", 50000 * 50000);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	char a = *(&i);
//	printf("%d ", a);
//	return 0;
//}

//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}
//int main()
//{
//	
//	return 0;
//}
//
//int find(const char* str, char* find)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, str);
//	strcat(tmp, str);
//	return strstr(tmp, find) != NULL;
//}

//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//unsigned int i;




//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	for (i = 0; i < 1000; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//���ʲô
//int main()
//{
//    unsigned int i;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u ", i);
//    }
//    return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	i = *((char*)&i);
//	printf("%d", i);;
//}


//����2
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}