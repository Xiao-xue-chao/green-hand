#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//·´ÏòÊä³ö×Ö·û´®
void reverse_string(char* arr) 
{

}

int main()
{
	char arr[20] = "abcdef";
	reverse_string(arr);
	return 0;
}

//int My_strlen(char* str2)
//{
//	if (*str2 == '\0')
//		return 0;
//	else
//		return 1 + My_strlen(str2 + 1);
//
//}
//int main()
//{
//	char arr2[20] = "0";
//	scanf("%s", arr2);
//	printf("%d",My_strlen(arr2));
//	return 0;
//}

//#include<string.h>
//int main()
//	{
//		char arr1[20] = "0";
//		scanf("%s", arr1);
//		int ret = 0;
//		ret = strlen(arr1);
//		printf("%d\n", ret);
//		return 0;
//	}
//int Factorial(int i)
//{
//	if (i == 1)
//	{
//		return 1;
//	}
//	else
//		return i * Factorial(i - 1);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n",Factorial(i));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int j = 0;
//	int sum = 1;
//	for (j = 1; j <= i; j++)
//	{
//		sum *= j;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}