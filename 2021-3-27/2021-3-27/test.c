#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int count_bit(unsigned int a)//��ʱ����Ǹ����Ļ��Ͳ�����
//                    //��ô�Ľ��ء�����������unsigned int
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
//int count_bit(int a)         //���ǵڶ���
//{                            //�����ƶ�i�ڰ�λ��1
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

//����һ�ַ���
int count_bit(a)            //���ﰴλ���������
{                           //13�Ķ����� 1101
	int count = 0;          //12�Ķ����� 1100  1101&1100=1100������һ��1
	while (a)               //11�Ķ����� 1011  1100&1011=1000��������һ��1
	{                       //��ôÿ��λ��һ�Σ�����һ��1
		a = a & (a - 1);    //��һ�ĸ������ǿ��԰�λ��Ĵ���
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


//int main()                   //�������鲻���ڴ�����ʱ���飬һ����ʱ��������
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

//�������飺�������
//�ַ����飺����ַ�
//ָ�����飺��ŵ���ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[10] = { &a, &b, &c };
//	for (int i = 0; i < 3; i++)   //С�ɻ�i<4,5,6.......�Ͳ���
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ�룬���⻹��n��ָ�롣
//	**ppa = 10;//�Ϳ��Ըı�a��ֵ��
//	printf("%d\n", **ppa);
//	printf("%d\n", a);//��ʱa��ֵ�ͷ����˱仯��
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p=&arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;              //�ı��Ӧ�ĵ�ַ�Ϳ��Ըı������Ӧ��ֵ��
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
//	//&arr--&arr��������ȡ���Ĳ�����Ԫ�صĵ�ַ������������ĵ�ַ��
//	//sizeof��arr����sizeof(������)���������������Ĵ�С��������������ʾ�����������顣
//	return 0;
//}