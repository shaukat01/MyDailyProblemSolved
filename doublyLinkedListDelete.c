#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *first = NULL;


void create(int arr[], int n)
{
    struct node *last, *t;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void display(struct node *p)
{
    while (p)
    {
        printf("%d", p->data);
        p = p->next;
    }
}

// by iterative
int count(struct node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int dlDelete(struct node *p, int index)
{
    struct node *q = NULL;
    int i;
    int x = -1;
    if (index < 0 || index > count(p))
    {
        return -1;
    }
    else
    {
        if (index == 1)
        {
            q = first;
            x = first->data;
            first = first->next;
            first->prev = NULL;
            free(q);
            return x;
        }
        else
        {
            
            for (i = 0; i < index - 1; i++)
            {
                q = p;
                p = p->next;
            }
            q->next = p->next;
            if (p->next!=NULL)
            {
                p->next->prev = q;
                x = p->data;
                free(p);
            }
            return x;
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

    int y = dlDelete(first, 2);
    printf("dleted element is %d\n", y);
          display(first);
    printf("\n");

    return 0;
}