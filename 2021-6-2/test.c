#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf(" % d % d", a + b, c);
	return 0;
}

//#include<stdio.h>
//#define N 10
//#define M 10
//char*  my_strcpy(char* str1, const char* str2)
//{
//	char tmp = '0';
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return str1;
//}
//int main()
//{
//	char arr1[N] = "12345";
//	char arr2[M] = "67891";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#define N 10
//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[N] = "0";
//	scanf("%s", arr);
//	printf("%d",my_strlen(arr));
//	return 0;
//}