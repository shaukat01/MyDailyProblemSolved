#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void enqueue(struct queue *q, int x)
{
    if (q->(rear + 1) % q->size == q->front)
    {
        printf("queue is full");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] == x;
    }
}

int dequeue(struct queue *q)
{
    if (q->front == q->rear)
    {
        printf("queue is empty");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->arr[q->front];
    }
    return x;
}
   
    //  here i am taking front and rear initialise with zero
void display(struct queue q)
{
}

int main()
{
    struct queue q;
    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 10);
    enqueue(&q, 10);
    enqueue(&q, 10);
    enqueue(&q, 10);
    display(q);

    return 0;
}