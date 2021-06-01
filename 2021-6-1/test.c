#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int thinking_question(int input)
{
	int sum = 0;
	while (input)
	{
		sum += input;
		int i = input % 2;
		input = (input + i) / 2;
		if (input == 1)
			break;
	}
	return sum;
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	int a = thinking_question(input);
	printf("%d", a);
	return 0;
}