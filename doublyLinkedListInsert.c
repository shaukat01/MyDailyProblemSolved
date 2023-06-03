#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;

void create(int arr[], int n)
{
    struct node *t, *last;
    int i;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = arr[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int lLength(struct node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

//   display
void display(struct node *p)
{
    while (p)
    {
        printf(" %d", p->data);
        p = p->next;
    }
}

void dlInsert(struct node *p, int index, int x)
{
    struct node *t, *last;
    int i;
    if (index < 0 || index > lLength(p))
        return;
    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->prev = p;
            t->next = p->next;
            if (p->next)
                p->next->prev = t;
            p->next = t;
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    create(arr, n);
    display(first);
    printf("\n");

    dlInsert(first, 2, 5);
    display(first);

    printf("\n");

    return 0;
}