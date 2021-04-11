#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//void My_strcpy(char* arr1,const char* arr2)//这个const可以加一分
//{
//	while (*arr1 != '\0')
//	{
//		*arr1++ = *arr2++;
//		/**arr1++;
//		*arr2++;*/  //这一步可以替换掉
//	}
//	//*arr1 = *arr2;//这里把while里的arr2换成arr1可以省去
//}
//在做优化
char* My_strcpy(char* arr1, const char* arr2)
{
	char* pa = arr1;
	assert(arr1 != NULL&& arr2 != NULL);//断言
	//assert(arr2 != NULL);
	while (*arr1++ = *arr2++);
	return *pa;
}
int main()
{
	char arr1[] = "%%%%%%%%";
	char arr2[] = "hello";
	My_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}