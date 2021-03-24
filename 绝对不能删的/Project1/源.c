#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//void Bubble_sort(int arr[],int sz)        //冒泡排序法
//{
//	int i = 0;
//	int j = 0;
//	int k = 0; 
//	int h = 1;                           //这里是优化
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j <sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				k = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = k;
//				h = 0;                      //
//			}
//		}
//		if (h == 0)                         //可以减少很多不必要的查找
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr,sz);
//	printf("元素个数=%d\n", sz);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	return 0;
//}


//void test(int x)
//{
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);                 //求斐波那契数列
//}
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	ret = Fib(i);
//	printf("%d", ret);
//	return 0;
//}


//int Ret_facl(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//		return x * Ret_facl(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = Ret_facl(n);
//	printf("n!=%d", sum);
//	return 0;
//}

//int My_strlen(char* str)  //使用了临时变量
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
                           //不使用临时变量
                           //递归

//int My_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1+My_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = My_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)        //递归：顺序输出数字          
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//    print(num);
//	return 0;
//}

//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//}
//声明函数
//int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}



//#include<string.h>
//
//int main()
//{
//	int a ;
//	a = strlen("10");
//	//printf("%d", printf("%d\n\n",printf("%d\n",a) ) );
//	printf("%d", a);
//
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;          //注意，++优先级比*高
//}
//int main()
//{
//	int num = 0;
//	
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}





//                       //这里arr本质上是一个指针
//int Binary_rearch(int arr[],int k,int sz)
//{                    
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < arr[k])
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > arr[k])
//		{
//			right = mid - 1;
//		}
//		else
//			return k;
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_rearch(arr,k,sz);    //这里传递过去的只是数组首地址
//	if (ret == -1)
//		printf("没找到");
//	else
//		printf("%d\n", ret);
//
//	return 0;
//}
 
 
  
 

//int Leap_year(int a)
//{
//	if ((a % 4 == 0) && (a % 100 != 0))   //这里还可以合并一下
//		return 1;
//	if (a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 3000; i++)
//	{
//		if (Leap_year(i)== 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_prime(int a)             //判断是不是素数
//{
//	int j = 0;
//	for (j = 1; j < a; j++)
//	{
//		if (a % j == 0)
//			return 0;
//		else
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (is_prime(i) == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;//指针变量
//	//*pa = 20;//解引用操作
//	printf("%d,%d\n", a, b);
//	Swap2(&a, &b);
//	printf("%d,%d\n", a,b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//				
//			else
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//void Swap1(int x,int y)
//{
//	int c = 0;;
//	c = x;
//	x = y;
//	y = c;
//}
//int main()
//{
//	int a = 100;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	Swap1(a,b);                      //当实参传给形参的时候，形参其实是实参的临时拷贝，对形参的改变不会改变实参。
//	printf("%d,%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);
//	return 0;

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d", max);
//}
//#include<string.h>
//
//int main()
//{
//	char arr[]="hello word";
//	memset(arr,'*',5);
//	printf("%s", arr);
//	return 0;
//}


//memset
// memory：内存  set：设置
//#include<string.h>
//
//int main()
//{
//	char arr1[]="bit" ;
//	char arr2[20] = "#######";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	//strcpy__string copy   字符串拷贝 
//	//strlen--string length  字符串长度
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input = { 0 };
//	//shutdown-s-t 60
//	//system()----执行系统命令
//	system("shutdown - s - t 60");
//	again:
//	printf("请注意，你的电脑会在一分钟后关机，如果输入我是猪就停止关机\n请输入>:");
//	scanf("%s", input);
//	//strcmp()比较两个字符串的函数
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好");
//again:
//	printf("hehe\n");
//	return 0;
//}
//#include <stdlib.h>
//#include<time.h>
//
////猜数字游戏
//void menu()
//{
//	printf("************************\n");
//	printf("*** 1.play   0.exit  ***\n");
//	printf("************************\n");
//}
////RAND_MAX ——32767
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100 + 1;//生成0----100的随机数
//
//	//printf("%d\n", ret);
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	//生成一个随机数
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();//数字
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (i);
//	return 0;
//}
//int main()             //输出乘法口诀
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);//2%，-2%左右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 100; i+=2)
//	{
//		a += 1.0/i;
//	}
//	for (j = 2; j <= 100; j += 2)
//	{
//		b -= 1.0 / j;
//	}
//	c = a + b;
//	printf("%lf\n",a);
//	printf("%lf\n",b);
//	printf("%lf\n",c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = 0;
//		int b = 0;	
//		a = i % 10;
//		b = i / 10;
//		if ((a == 9) || (b == 9))
//		{
//			c++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nc=%d", c);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;                                //素数判断：   试触法
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)          //还可以跳过所有的偶数，每次加2
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//for (j = 2; j < i; j++)  //可以优化
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year%4==0)&&(year%100!=0))|| (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}*/
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int d = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		d = m % n;
//		m = d;
//		n = m;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < +100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s",password);
//		if (strcmp(password , "123456")==0)//等号不能用来判断两个字符串是否相等，应该使用库函数---strcmp
//
//		{
//			printf("登录成功\n");
//			break;
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，登录失败\n");
//	}
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//因为字符串会有一个'\n'，加上本来的减1，就是减2。
//	int right = strlen(arr1)-1;//或者用
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令_____cls叫清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}