#include<stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_node(Node *temp);

int main()
{
    Node p, q, r;
    Node *head = NULL;

    head = &p;

    p.value = 10;
    p.next = &q;
    print_node(&p);

    q.value = 20;
    q.next = &r;
    print_node(&q);

    r.value = 30;
    r.next = NULL;
    print_node(&r);

    return 0;
}

void print_node(Node *temp)
{
    printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
}
