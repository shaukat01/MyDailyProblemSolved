#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct stack
{
    int data;
    int size;
    int top;
    int *arr;
};

void display(struct stack *st)
{
        int i;
        if(st->top==-1)
        {
            printf("stack is empty\n");
            return ;
        }
        for(i=st->top;i>=0;i--){
            printf("%d",st->arr[i]);
        }
}

void push(struct stack *st, int key)
{
    if (st->top == st->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = key;
    }
    printf("The stack contents are\n");
    display(st);
    return;
}

void pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("stack underflow");
        return;
    }
    else
    {
        int x = st->arr[st->top];
        st->top--;
        printf("poped element is %d\n",x);
        printf("The stack contents are\n");
        display(st);
        return;
    }
}



void create(struct stack *st)
{ 
    st->size = 4;
    st->top = -1;
    st->arr = (int*)malloc(st->size*sizeof(int));
}
int main()
{
//    struct stack *st=(struct stack *)malloc(sizeof(struct stack));
     struct stack st;
     create(&st);
     int choice,x=0,key;
     while(x!=4)
     {
         printf("\nMAIN MENU\n");
         printf("1. PUsh\n");
         printf("2.Pop\n");
         printf("3.display\n");
         printf("4.Exit\n");
         printf("Enter your choice\n");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1:
             printf("Enter the element to be pushed\n");
             scanf("%d",&key);
             push(&st,key);
             break;
             case 2:
             pop(&st);
             break;
             case 3:
             display(&st);
             break;
             case 4:
             printf("Exit\n");
             x=4;
             break;
         
         }
         }
         return 0;
     }
    
      
    
