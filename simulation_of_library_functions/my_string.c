#define _CRT_SECURE_NO_WARNINGS 1

#include"my_string.h"

size_t my_strlen(const char* arr)
{
	/*assert(arr != NULL);
	int ret = 0;
	while (*arr++)
	{
		ret++;
	}
	return ret;*/

	char* str = arr;
	while (*str++)
	{
		;
	}
	return (str - arr - 1);
}

char* my_strcpy(char* destination, const char* source)
{
	assert(destination && source);
	char* p = destination;
	char* q = source;
	while (*p++ = *q++)
	{
		;
	}
	return destination;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* p1 = str1;
	char* p2 = str2;
	while (*p1 == *p2)
	{
		p1++;//此处不能写道while循环里
		p2++;//因为当p1 ！=p2 时要跳出循环，
	}        //且指针不能在++
	return *p1 - *p2;
}

char* my_strcat(char* destination, const char* source)
{
	char* str1 = destination;
	char* str2 = source;
	assert(str1 && str2);

	while (*str1)
	{
		str1++;
	}
	while (*str2)
	{
		*str1++ = *str2++;
	}
	*str1 = *str2;
	return destination;
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* p1 = str1;
	char* p2 = str2;
	char* a1, * a2;
	while (*p1)
	{
		a1 = p1;
		a2 = p2;
		while (*a1 == *a2)
		{
			a1++;
			a2++;
		}
		if (*a2 == '\0')
		{
			return p1;
		}
		p1++;
	}
	return NULL;
}