#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#define MAX_NODE_NUM 10
#define FREE_NAME '*'
#define MAXNUM 9999
typedef struct edge_node {
	int adjacent;
	struct edge_node* next;
	int cost;
}edge_node, * Eptr;
typedef struct {
	char name;
	int father;
	int dist;
	Eptr firstarc;
	int Llink, Rlink;
}hnode;
typedef struct {
	char name;
	int number;
}Vnode;
typedef struct {
	Vnode V[MAX_NODE_NUM];
	hnode L[MAX_NODE_NUM + 1];
	int node_num;
}graph;
//邻接表
graph g;
void init_graph()
{
	int ix;
	g.node_num = 0;
	for (ix = 0; ix < MAX_NODE_NUM; ix++)
	{
		g.V[ix].name = FREE_NAME;
		g.V[ix].number = ix;
		g.L[ix].dist = MAXNUM;
		g.L[ix].father = 0;
		g.L[ix].firstarc = NULL;
		g.L[ix].Llink = 0;
		g.L[ix].Rlink = 0;
	}
}
void jxedge(char* inch, char* x, char* y, int* cost)
{
	int ix;
	int yy;
	*x = inch[0];
	ix = 1;
	while ((inch[ix] != ',') && (inch[ix] != '\n'))
		ix++;
	ix++;
	*y = inch[ix++];
	while ((inch[ix] != ',') && (inch[ix] != '\n'))
		ix++;
	ix++;
	yy = 0;
	while ((inch[ix] >= '0') && (inch[ix] <= '9'))
		yy = 10 * yy + (inch[ix++] - '0');
	*cost = yy;
}
int insert_edge(char x, char y, int cost)
{
	int ix, y_num;
	Eptr p;
	for (y_num = 0; y_num < g.node_num; y_num++)
		if (y == g.V[y_num].name) break;
	if (y_num == g.node_num)
	{ //在顶点表中插入y
		if (g.node_num >= (MAX_NODE_NUM - 1))
		{
			printf("too much node number.\n");
			return -1;
		}
		g.V[y_num].name = y;
		g.V[y_num].number = y_num;
		g.L[y_num].name = y;
		g.node_num++;
	}
	for (ix = 0; ix < g.node_num; ix++)
		if (x == g.V[ix].name) break;
	if (ix == g.node_num)
	{ //x不在表中
		if (g.node_num >= (MAX_NODE_NUM - 1))
		{
			printf("too much node number.\n");
			return -1;
		}
		//在顶点表中插入x
		g.V[ix].name = x;
		g.V[ix].number = ix;
		g.L[ix].name = x;
		g.node_num++;
	}
	//在邻接表中插入(x,y,cost)
	p = (Eptr)malloc(sizeof(edge_node));
	p->adjacent = y_num;
	p->cost = cost;
	p->next = g.L[ix].firstarc;
	g.L[ix].firstarc = p;
	g.L[ix].dist = 0;
	g.L[ix].father = 0;
	g.L[ix].Llink = 0;
	g.L[ix].Rlink = 0;
	g.L[ix].name = x;
	return 0;
}
void input_graph()
{
	char x, y;
	int cost;
	char tempch[20];
	while (1)
	{
		printf("input one edge, the format is:A,B,10. input '*' means no more edge.\n");
		scanf("%s", tempch);
		if ('*' == tempch[0]) return;
		jxedge(tempch, &x, &y, &cost);
		if (-1 == insert_edge(x, y, cost)) return;
	}
}
void type_path(int s_num)
{
	char path[MAX_NODE_NUM];
	int path_last;
	int v, w;
	for (v = 0; v < g.node_num; v++)
	{
		path_last = -1;
		w = v;
		while (w != s_num)
		{
			path[++path_last] = g.L[w].name;
			w = g.L[w].father;
		}
		printf("%c-", g.L[s_num].name);
		while (path_last > 0)
		{
			printf("%c-", path[path_last--]);
		}
		if (-1 != path_last)
			printf("%c", path[0]);
		printf(" cost = %d.\n", g.L[v].dist);
	} }
void dijkstra(int s_num)
{
	int v, w;
	Eptr p;
	int dist;
	for (v = 0; v <= g.node_num; v++)
	{
		g.L[v].dist = MAXNUM;
		g.L[v].father = s_num;
		g.L[v].Llink = v - 1;
		g.L[v].Rlink = v + 1;
	}
	g.L[0].Llink = g.node_num;
	g.L[g.node_num].Rlink = 0;
	g.L[g.L[s_num].Llink].Rlink = g.L[s_num].Rlink;
	g.L[g.L[s_num].Rlink].Llink = g.L[s_num].Llink;
	g.L[s_num].father = s_num;
	g.L[s_num].dist = 0;
	p = g.L[s_num].firstarc;
	while (p)
	{
		v = p->adjacent;
		g.L[v].dist = p->cost;
		p = p->next;
	}
	while (g.L[g.node_num].Rlink != g.node_num)
	{
		//找dist最小的顶点
		v = g.L[g.node_num].Rlink;
		dist = g.L[v].dist;
		w = g.L[v].Rlink;
		while (w != g.node_num)
		{
			if (g.L[w].dist < dist)
			{
				dist = g.L[w].dist;
				v = w;
			}
			w = g.L[w].Rlink;
		}
		//v为dist最小的顶点，将v从双向链表中取下
		g.L[g.L[v].Llink].Rlink = g.L[v].Rlink;
		g.L[g.L[v].Rlink].Llink = g.L[v].Llink;
		//扫描v的邻接表，修改其邻接点的dist
		p = g.L[v].firstarc;
		while (p)
		{
			w = p->adjacent;
			if (g.L[w].dist > (p->cost + g.L[v].dist))
			{
				g.L[w].dist = p->cost + g.L[v].dist;
				g.L[w].father = v;
			}
			p = p->next;
		}
	}
	type_path(s_num);
}
void shortest_p()
{
	char s_ch[10];
	int s_num;
	printf("input source node name.\n");
	scanf("%s", s_ch);
	for (s_num = 0; s_num < g.node_num; s_num++)
		if (s_ch[0] == g.V[s_num].name) break;
	if (s_num == g.node_num)
	{
		printf("err source node name.\n");
		return;
	}
	//求最短路径
	dijkstra(s_num);
}
int  main()
{
	int i = 1;

	while (1)
	{
		printf("1:in put 2:shortest 3:exit\n");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			printf("输入边序列\n");
			input_graph();
			break;

		case 2:
			printf("输入最短路径顶点s");
			shortest_p();
			break;
		case 3:

			return 0;
		}
	}
}