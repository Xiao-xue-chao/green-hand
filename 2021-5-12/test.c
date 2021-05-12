#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void rev_ord(char* first, char* last)
{
	while (first < last)
	{
		char tmp = *last;
		*last = *first;
		*first = tmp;
		first++;
		last--;
		if (first >= last)
			break;
		/*else
			rev_ord(first, last);*/
	}
}
int main()
{
	char str[20] = { 0 };
	printf("ÇëÊäÈë×Ö·û´®\n");
	gets(str);
	int s = strlen(str);
	//printf("%d", s);
	//scanf_s("%s", str);
	printf("ÄæĞòÇ°£º%s \n", str);
	rev_ord(&str, &str + s - 1);
	printf("ÄæĞòºó£º%s \n", str);
	return 0;
}
