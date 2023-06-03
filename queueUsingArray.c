#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
//  struct harendra{
//      int data;
//      int size;
//      int val;
//  };

// void insert(struct haredra *h){
// }

void create(struct queue *q, int n)
{
    q->size = n;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(n * sizeof(int));
}

void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1) 
    {
        printf("queue is full");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        printf("queue is empty");
    }
    else
    {
        q->front++;
        x = q->arr[q->front];
    }
    return x;
}

void display(struct queue q)
{

    for (int i = q.front + 1; i <= q.rear; i++)
    {
        printf("%d ", q.arr[i]);
    }
}

int main()
{
    struct queue q;
    // struct queue f;
    // create(&f, 1000);
    create(&q, 5);
    // fresh
    enqueue(&q, 2);
    enqueue(&q, 9);
    enqueue(&q, 12);
    enqueue(&q, 19);

    display(q);
    printf("\n");
    dequeue(&q);
    display(q);

    return 0;
}
