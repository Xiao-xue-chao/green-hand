#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int val;
	struct Node* next;
	struct Node* random;
}STNode;

struct Node* BuyNode(int x)
{
    struct Node* plist = (struct Node*)malloc(sizeof(struct Node));
    plist->val = x;
    return plist;
}
struct Node* copyRandomList(struct Node* head) {
    struct Node* cur = head;
    while (cur)
    {
        struct Node* copy = BuyNode(cur->val);
        struct Node* next = cur->next;
        copy->next = next;
        cur->next = copy;
        cur = cur->next->next;
    }
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        copy->random = cur->random->next;
        cur = cur->next->next;
    }
    cur = head;
    struct Node* newhead = BuyNode(NULL);
    if (newhead == NULL)
        return;
    struct Node* curnewhead = newhead;
    while (cur)
    {
        curnewhead->next = cur->next;
        curnewhead = curnewhead->next;
        cur->next = curnewhead->next;
        cur = curnewhead->next;

    }
    return newhead->next;
}

void test()
{
    STNode* plist = NULL;

    STNode* n1 = BuyNode(7);
    STNode* n2 = BuyNode(13);
    STNode* n3 = BuyNode(11);
    STNode* n4 = BuyNode(10);
    STNode* n5 = BuyNode(1);

    plist = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    n1->val = 7;
    n2->val = 13;
    n3->val = 11;
    n4->val = 10;
    n5->val = 1;

    n1->random = NULL;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n3;
    copyRandomList(plist);
}
int main()
{
    test();

	return 0;
}