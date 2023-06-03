#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

struct node *getnode()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
        return NULL;
    temp->data = 0;
    temp->next = NULL;
    return temp;
}

void create(struct node *q)
{
    q->next = NULL;
    q->data = 0;
}

void insert(struct node *q, int key)
{
    struct node *t = getnode();
    if (t == NULL)
    {
        printf("queue is full\n");
        return;
    }
    t->data = key;
    t->next = NULL;
    if (front == NULL)
    {
        front = rear = t;
        return;
    }
    rear->next = t;
    rear = t;
}
void delete (struct node *q)
{
    // int x;
    struct node *t;
    if (front == NULL)
    {
        printf("queue is empty\n");
        return;
    }
    // x = front->data;
    t = front;
    front = front->next;
    free(t);
}

void display(struct node q)
{
    struct node *t = front;
    while (t)
    {
        printf("%d ", t->data); // here head  changes due to globally declare of front and rear
        t = t->next;
    }
}

int main()
{
    struct node q;
    create(&q);
    int choice;
    int key;
    int x = 0;
    while (x != 4)
    {
        printf("Choice 1 : Enter element into Queue\n");
        printf("Choice 2 : Delete element from Queue\n");
        printf("Choice 3 : Display\n");
        printf("Any other choice : Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted/entered\n");
            scanf("%d", &key);
            insert(&q, key);
            break;
        case 2:
            printf("The deleted element is %d\n", key);
            delete (&q);
            break;
        case 3:
            printf("The contents of the queue are\n");
            display(q);
            break;
        case 4:
            x = 4;
            break;
        }
    }
    return 0;
}
