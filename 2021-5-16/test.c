#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
typedef struct linknode
{
	int data;
	struct linknode* next;
} LISTNODE, * LISTNODEPTR;
LISTNODEPTR listcreate(int data[], int n)
{
	int i;
	LISTNODEPTR h = NULL, p;
	/* 向前插入构造链表 */
	for (i = 0; i < n; i++)
	{
		p = (LISTNODEPTR)malloc(sizeof(LISTNODE));
		p->data = data[i];
		p->next = h;
		h = p;
	}
	return h;
}
void listdestroy(LISTNODEPTR h)
{
	LISTNODEPTR p;
	while (h)
	{
		p = h;
		h = h->next;
		free(p);
	}
}
void listprint(LISTNODEPTR h)
{
	LISTNODEPTR p = h;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
LISTNODEPTR listmerge(LISTNODEPTR ha, LISTNODEPTR hb)
{
	LISTNODEPTR p, q;
	if (ha == NULL) return hb;
	if (hb == NULL) return ha;
	p = ha;
	while (p != NULL && hb != NULL)
	{
		/* 从 hb 取下一个节点 */
		q = hb;
		hb = hb->next;
		/* 插入到 ha 中 */
		q->next = p->next;
		p->next = q;
		p = q->next;
	}
	if (p == NULL)
		q->next = hb;
	return ha;
}
int main()
{
	int a[] = { 6, 4, 2, 0 };
	int b[] = { 9, 7, 5, 3, 1 };
	int lena = sizeof(a) / sizeof(a[0]);
	int lenb = sizeof(b) / sizeof(b[0]);
	LISTNODEPTR ha, hb, hc;
	ha = listcreate(a, lena);
	listprint(ha);
	hb = listcreate(b, lenb);
	listprint(hb);
	hc = listmerge(ha, hb);
	listprint(hc);
	listdestroy(hc);
	return 0;
}