#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
void reverse_sequence(char* str,int sz)
{
	char a = '0';
	
}
int main()
{
	char arr[100] = "0";
	scanf("%s", arr);
	int sz = strlen(arr);
	reverse_sequence(arr, sz);
	return 0;
}

//#include<stdio.h>
//#include<math.h>
//#define N 100000
//int main()
//{
//	int i = 0;
//	/*double a = 3;
//	double b = 3;
//	printf("%lf", pow(a, b));*/
//	for (i = 0; i < N; i++)
//	{
//		int tmp = i;
//		double count = 1;
//		double sum = 0;
//		while (tmp / 10)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%lf ", sum);
//		}
//	}
//	printf("\n");
//	return 0;
//}