#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 5

void reverse_arr(char arr[], int left, int right)
{
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void print_arr(char arr[], int  n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}
int main()
{
	char arr[N] = "abcde";
	int k = 0;
	print_arr(arr, N);
	scanf("%d", &k);
	k %= N;
	reverse_arr(arr, 0, N - k - 1);
	reverse_arr(arr, N - k, N - 1);
	reverse_arr(arr, 0, N - 1);
	print_arr(arr, N);
	return 0;
}

//int main()
//{
//	int i = 5;
//	for (i = 5; i >= 0; i--)
//	{
//		printf("#");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int main()
//{
//    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31,30 };
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if (month == 2)
//        {
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//            {
//                printf("%d\n", day[month] + 1);
//            }
//        }
//        else
//            printf("%d\n", day[month]);
//    }
//    return 0;
//}
//int main()
//{
//    int k = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    /*while (scanf("%d", &k) != EOF)
//    {
//        if (k > max)
//            max = k;
//        if (k < min)
//            min = k;
//        sum += k;
//    }*/
//    printf("%.2lf\n", (sum - min - max) / 5.0);
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int k = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			if (j == i)
//				printf("*");
//			else if (j + i == k - 1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}