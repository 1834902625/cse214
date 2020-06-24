#include<stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_list(Node *temp);

int main()
{
    Node p, q, r;
    Node *head = NULL;

    head = &p;

    p.value = 10;
    p.next = &q;

    q.value = 20;
    q.next = &r;

    r.value = 30;
    r.next = NULL;

    print_list(head);

    return 0;
}

void print_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
}
