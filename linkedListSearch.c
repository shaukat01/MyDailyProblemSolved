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

struct node *lSearch(struct node *p, int key)    
{

    while (p)
    {
        if (key == p->data )
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

    // recursive search
    struct node *rSearch(struct node *p,int key){
        if(p==NULL){
            return NULL;
        }
        else if(key==p->data){
            return p;
        }
        else{
            return rSearch(p->next,key);
        }
    }

int main()
{
    struct node *temp;

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    create(arr, n);

    //  for iterative
    temp = lSearch(first, 25);
    if (temp)
    {
        printf("key is found %d", temp->data);
    }
    else
    {
        printf("key is not found");
    }
  
    printf("\n"); 
    // for recursive
     struct node *rTemp;
     rTemp=lSearch(first,25);
     if (rTemp)
    {
        printf("key is found %d", rTemp->data);
    }
    else
    {
        printf("key is not found");
    }

    return 0;
}