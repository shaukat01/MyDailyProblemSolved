#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("queue is full");
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct node *t;
    if (front == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void display()
{
    struct node *t=front;
    while (t)
    {
        printf("%d", t->data);
        t = t->next;
    }
    printf("\n");
}

int main()
{
    struct node q;
    enqueue(10);
    enqueue(11);
    enqueue(18);
    enqueue(22);

    display();

    return 0;
}