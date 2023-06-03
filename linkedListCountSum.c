#include <stdio.h>
#include <stdlib.h>

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

//   display
void display(struct node *p)
{
    while (p)
    {
        printf(" %d", p->data);
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

//  by recursive
int rCount(struct node *p)
{
    if (p)
    {
        return rCount(p->next) + 1;
    }
    else
    {
        return 0;
    }
}

// sum of nodes
int sumNodes(struct node *p)
{
    int sum;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

    // recursive sum
    int rSum(struct node *p){
        if(p){
            return rSum(p->next)+p->data;
        }
            else{
     return 0;
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
    display(first);

   printf("\n");
    int y = count(first);
    printf("length is five %d\n", y);

       printf("\n");
    int z = rCount(first);
    printf("count is %d\n", z);

     printf("\n");
    int w = sumNodes(first);
    printf("sum is %d\n", w);

    printf("\n");
    int q=rSum(first);
    printf("recursive sum is %d",q);

    return 0;
}
