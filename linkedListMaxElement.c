#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
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

//   iterative
int max(struct node *p)
{
    int max = INT_MIN;
    // int max = -43544;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

//    by recursive
int rMax(struct node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT_MIN;
    }
    x = rMax(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
    {
        return p->data;
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
    printf("\n");

    int z = max(first);
    printf("max elemnt is %d\n", z);

     int y = rMax(first);
    printf("max elemnt is %d\n", y);
    return 0;
}