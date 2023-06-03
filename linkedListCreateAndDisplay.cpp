#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
}*first = NULL;

void create(int arr[], int n)
{
  struct node *t, *last;
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
// void display()
{
  // struct node *p=first;
  while (p != NULL)
  {
    printf("%d ",p->data);
    p = p->next;
  }
}

int main()
{
// struct node *first=NULL;
  int arr[] = {1, 5, 3, 9, 11, 99};

  create(arr, 6);

  display(first);
  // display();
  return 0;
}