#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//Definition for singly-linked list.
typedef struct ListNode {
    int val;
    struct ListNode *next;
}SListNode;



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next = NULL;
    struct ListNode* tail = newhead;
    while (l1 && l2)
    {
        if (l1->val >= l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }
    if (l1)
        tail->next = l1;
    if (l2)
        tail->next = l2;
    return newhead->next;
}

void test1()
{
    SListNode* n1 = (SListNode*)malloc(sizeof(SListNode));
    n1->val = 1;

    SListNode* n2 = (SListNode*)malloc(sizeof(SListNode));
    n2->val = 2;

    SListNode* n3 = (SListNode*)malloc(sizeof(SListNode));
    n3->val = 3;

    SListNode* n4 = (SListNode*)malloc(sizeof(SListNode));
    n4->val = 4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    SListNode* m1 = (SListNode*)malloc(sizeof(SListNode));
    m1->val = 1;

    SListNode* m2 = (SListNode*)malloc(sizeof(SListNode));
    m2->val = 3;

    SListNode* m3 = (SListNode*)malloc(sizeof(SListNode));
    m3->val = 2;

    SListNode* m4 = (SListNode*)malloc(sizeof(SListNode));
    m4->val = 4;

    m1->next = m2;
    m2->next = m3;
    m3->next = m4;
    m4->next = NULL;

    mergeTwoLists(n1, m1);
}

int main()
{
    printf("v   v\n");
    //printf("\n");
    printf(" v v\n");
   // printf("\n");
    printf("  v\n");
    //test1();

	return 0;
}