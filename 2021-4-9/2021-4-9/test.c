#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//void My_strcpy(char* arr1,const char* arr2)//���const���Լ�һ��
//{
//	while (*arr1 != '\0')
//	{
//		*arr1++ = *arr2++;
//		/**arr1++;
//		*arr2++;*/  //��һ�������滻��
//	}
//	//*arr1 = *arr2;//�����while���arr2����arr1����ʡȥ
//}
//�����Ż�
char* My_strcpy(char* arr1, const char* arr2)
{
	char* pa = arr1;
	assert(arr1 != NULL&& arr2 != NULL);//����
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