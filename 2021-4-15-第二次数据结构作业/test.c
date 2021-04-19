#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<string.h>

#define NAME_LENGTH 100
typedef struct tree
{
	int date;
	char name[NAME_LENGTH];
	struct tree* Lson;
	struct tree* Rson;
	int height;
}NODE;
int y = 1;
NODE* createtree()
{
	int u;
	NODE* p;
	char ix[NAME_LENGTH] ;
	if (y++ != 0)
	{
		gets(ix, NAME_LENGTH);
	}
	printf("请输入名字\n");
	gets(ix,NAME_LENGTH);
	if (ix[0] == '#')
	{
		y = 0;
		return NULL;
	}
	p = (NODE*)malloc(sizeof(NODE));
	for (u = 0; u < strlen(ix); u++)
		(p->name)[u] = ix[u];
	(p->name)[u] = '\0';
	printf("请输入数据\n");
	scanf("%d", &p->date);
	p->height = 0;
	p->Lson = createtree();
	p->Rson = createtree();
	return p;
}

void menu()
{
	printf("请输入一个数\n");
	printf("***************\n");
	printf("*1.create tree*\n");
	printf("*2. incorder  *\n");
	printf("*3. postorder *\n");
	printf("*4.   high    *\n");
	printf("*5.  ancent   *\n");
	printf("*6.clear tree *\n");
	printf("*7.   exit    *\n");
	printf("***************\n");
}

void preorder(NODE* root)
{
	if (NULL == root)
		return;
	printf("%s", root->name);
	preorder(root->Lson);
	preorder(root->Rson);
}

void inorder(NODE* root)
{
	if (NULL == root)
		return;
	printf("%s", root->name, strlen(root->name));
	inorder(root->Rson);
}

void aforder(NODE* root)
{
	if (NULL == root) return;
	aforder(root->Lson);
	aforder(root->Rson);
	printf("%s ", root->name);
}
int Height(NODE* pp)
{
	int i, j;
	i = (pp->Lson) ? Height(pp->Lson) : 0;
	j = (pp->Rson) ? Height(pp->Rson) : 0;
	pp->height = (i > j) ? (i + 1) : (j + 1);
	printf("%s的高度为%d\n", pp->name, pp->height);
	return pp->height;
}

void cleartree(NODE* root)
{
	if (NULL == root) return;
	cleartree(root->Lson);
	cleartree(root->Rson);
	free(root);
}
int GetNodeAncestor(int xx, NODE* pp)
{
	if (pp)
	{
		if (pp->date == xx)
		{
			printf("%d ", pp->date);
			return 1;
		}
		if (GetNodeAncestor(xx, pp->Lson) ||GetNodeAncestor(xx, pp->Rson))
		{
			printf("%d ", pp->date);
			return 1;
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int x, h;
	NODE* head = (NODE*)malloc(sizeof(NODE));
	int a = 0;
	while (1)
	{
		menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1: 
			head = createtree();
			preorder(head);
			break;
		case 2:
			inorder(head);
			printf("\n");
			break;
		case 3:
			aforder(head);
			printf("\n"); 
			break;
		case 4:
			h = Height(head); 
			break;
		case 5: 
			printf("Please imput a date");
			scanf("%d", &x);
			GetNodeAncestor(x, head);
		case 6:
			cleartree(head);
			break;
		default:
			a = 1;
			break;
		}
		if (a == 1)
			break;
	}
	return 0;
}