#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int count_bit(unsigned int a)//此时如果是负数的话就不行了
//                    //怎么改进呢。。。。。。unsigned int
//{
//	int i = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			i++;
//		}
//			a /= 2;
//	}
//	return i;
//}
//int count_bit(int a)         //这是第二种
//{                            //向右移动i在按位与1
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//还有一种方法
int count_bit(a)            //这里按位与具体如下
{                           //13的二进制 1101
	int count = 0;          //12的二进制 1100  1101&1100=1100，少了一个1
	while (a)               //11的二进制 1011  1100&1011=1000，又少了一个1
	{                       //那么每按位与一次，就少一个1
		a = a & (a - 1);    //则一的个数就是可以按位与的次数
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit(a);
	printf("%d\n",count);
	system("pause");
	return 0;
}


//int main()                   //交换数组不用在创建临时数组，一个临时变量就行
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int a = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n");
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0; 
//}

//void My_arr(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void My_printf(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = sz-1; i>=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Opposite(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	/*for (left = 0; left < sz - 1; left++)
//	{
//		printf("%d ", arr[1]);
//	}*/
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_arr(arr,sz);
//	My_printf(arr,sz);
//	Opposite(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);                                                           
//	}
//
//	return 0;
//}

//整型数组：存放整形
//字符数组：存放字符
//指针数组：存放的是指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[10] = { &a, &b, &c };
//	for (int i = 0; i < 3; i++)   //小疑惑：i<4,5,6.......就不行
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针，此外还有n级指针。
//	**ppa = 10;//就可以改变a的值。
//	printf("%d\n", **ppa);
//	printf("%d\n", a);//此时a的值就发生了变化。
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p=&arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;              //改变对应的地址就可以改变数组对应的值。
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("\n");
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("\n");
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//&arr--&arr数组名，取出的不是首元素的地址，是整个数组的地址。
//	//sizeof（arr），sizeof(数组名)计算的是整个数组的大小，这里数组名表示的是整个数组。
//	return 0;
//}