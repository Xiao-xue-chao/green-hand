#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	return 0;
}

////n^k´Î·½
//int My_power(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//		return n * My_power(n,k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = My_power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//int DigitSum(i)
//{
//	if (i <= 9)
//	{
//		return i;
//	}
//	else
//		return i % 10 + DigitSum(i / 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d",DigitSum(i));
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(arr + 1);
//}
//void  reverse_string(char* arr)
//{
//	char tmp = *arr;
//	int ret = my_strlen(arr);
//	*arr = arr[ret - 1];
//	arr[ret - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[ret - 1] = tmp;
//}
//int main()
//{
//	char arr[20] = "0";
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}