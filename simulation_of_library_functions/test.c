#define _CRT_SECURE_NO_WARNINGS 1

#include"my_string.h"

void test_my_strlen(char* p)
{
	//int ret1 = strlen(p);
	int ret2 = my_strlen(p);

	//printf("%d\n", ret1);
	printf("%d\n", ret2);
}

void test_my_strcpy(char* arr,char* p)
{
	printf("%s\n", my_strcpy(arr, p));
	printf("%s\n", strcpy(arr, p));
}

void test_my_strcmp(char* p1, char* p2)
{
	printf("%d\n", my_strcmp(p1,p2));
}

//void test(char* (*pf)(char* , char* ))
//{
//	printf("%s\n", pf());
//}

void test_my_strcat(char* arr, char* p1)
{
	//printf("%s\n", strcat(arr, p1));
	printf("%s\n", my_strcat(arr, p1));

}

void test_my_strstr(char* p1, char* p2)
{
	char* str = my_strstr(p1, p2);
	if (str == NULL)
	{
		printf("no found\n");
	}
	else
		printf("%s\n", str);
}

void test_my_memcpy(char* p1, char* p2)
{
	printf("%s\n", my_memcpy(p2, p1, 12));
}

int main()
{
	char* p1 = "abbbbbcde";
	char* p2 = "bbc";

	char arr[20] = { "asdfd"};
	char arr4[20] = { "0" };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10] = { 0 };

	//test_my_strlen(p);
	//test_my_strcpy(arr,p1);
	//test_my_strcmp(p1, p2);
	//test_my_strcat(arr, p1);
	//test_my_strstr(p1, p2);
	//test_my_memcpy(arr, arr4);
	//printf("%s\n",memcpy(arr4, arr, 3));
	printf("%s\n",memmove(arr + 2, arr, 3));
	return 0;
}