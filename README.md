# green-hand
Welcome everyone.
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit !!!";
	char arr2[] = "##################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//因为字符串会有一个'\n'，加上本来的减1，就是减2。
	int right = strlen(arr1)-1;//或者用
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒
		system("cls");//执行系统命令_____cls叫清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
