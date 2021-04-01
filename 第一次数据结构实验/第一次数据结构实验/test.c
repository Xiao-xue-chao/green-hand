#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#define MIN_NUMBER 1
#define MAX_NUMBER 100

typedef struct sNODE
{
	char name[20];
	char sex[5];
	int eage;
	int number;
	struct sNODE* next;
}sNODE;
sNODE* init_link()
{
	sNODE* p;
	p = (sNODE*)malloc(sizeof(sNODE));
	if (p)
	{
		p->next = NULL;
	}

	return p;
}
int insert(sNODE* head)
{
	sNODE* p;
	sNODE* s;
	int number;
	s = (sNODE*)malloc(sizeof(sNODE));
	if (NULL == s)
	{
		printf("insert malloc fail.\n");
		return -1;
	}
	printf("input number(%d--%d):", MIN_NUMBER, MAX_NUMBER);
	scanf("%d", &number);
	while ((number > MAX_NUMBER) || (number < MIN_NUMBER))
	{
		printf("the number is out of range. please input a new number:");
		scanf("%d", &number);
	}s->number = number;
	printf("input name<less then 20 chars>:");
	scanf("%s", &s->name);
	printf("input sex. f or m:");
	scanf("%s", &s->sex);
	printf("input eage:");
	scanf("%d", &s->eage);
	printf(" insert ... \n");
	p = head;
	while (NULL != p->next)
	{
		if (s->number < p->next->number)
			break;
		p = p->next;
	}s->next = p->next;
	p->next = s;
	return 0;
}
void number_search(sNODE* head)
{
	int num;
	sNODE* p = head->next;
	printf("(searchnum) put the number of the student\t");
	scanf("%d", &num);

	while (p)
	{
		if (num == p->number)
		{
			printf("number=%d, name = %s, sex=%s, eage=%d\n", p->number, p->name, p->sex, p->eage); break;
		}
		else
		{
			p = p->next;

		}
	}
	if (!p)
		printf("not found\n");
}
void name_search(sNODE* head)
{
	char nm[20];
	sNODE* p = head->next;
	printf(" (searchname) put the name of the student\t");
	scanf("%s", &nm, 20);
	//printf("\n %s,", nm);
	while (p)
	{
		if (!strcmp(nm, p->name))
		{
			printf("number=%d, name = %s, sex=%s, eage=%d\n", p->number, p->name, p->sex, p->eage); break;
		}
		else
			p = p->next;
	}
	if (!p)
		printf("not found\n");
}
sNODE* delete (sNODE* head)
{
	int num;

	sNODE* a = head;
	printf("(delete)  put the number of the student\t");
	scanf("%d", &num);
	while (a)
	{
		if (num == a->next->number)
		{
			sNODE* p = a->next;
			a->next = a->next->next;
			free(p);
			break;
		}
		else
			a = a->next;
	}
	return head;
}
void list(sNODE* head)
{
	sNODE* p;
	p = head->next;
	printf("students:\n");
	while (NULL != p)
	{
		printf("number=%d, name = %s, sex=%s, eage=%d.\n",
			p->number, p->name, p->sex, p->eage);
		p = p->next;
	}
	printf("end of list.\n");
}

int main()
{
	sNODE* head = (sNODE*)malloc(sizeof(sNODE));
	head = init_link();
	printf("1--insert,2--number search,3--name search,4--delete,5--list,6--exit\n");
	int i = 1;
	while (i <= 6)
	{
		switch (i)
		{
		case 1: insert(head);
			break;
		case 2:number_search(head);
			break;
		case 3:name_search(head);
			break;
		case 4: head = delete(head);
			break;
		case 5:list(head);
			break;
		case 6:printf("exit"); 
		return 0;
		}
		printf("put the order \t");
		scanf("%d", &i);
	}
	return 0;
}