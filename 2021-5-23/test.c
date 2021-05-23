#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_even_number(int a)
{
	int i = 31;
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}
void print_uneven_number(int a)
{
	int i = 30;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print_even_number(a);
	print_uneven_number(a);
	return 0;
}

//#include<assert.h>
//int my_strlen(const char* str)//
//{
//	assert(str != NULL);//╤оят
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}