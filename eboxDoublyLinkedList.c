#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *getnode()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        return NULL;
    }
    temp->data = 0;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insert(struct node **head, int key)
{

    struct node *t = getnode();
    // if (t == NULL)
    // {
    //     printf("memory error\n");
    //     return;
    // }
    t->data = key;
    if (*head == NULL)
    {
        *head = t;
        return;
    }
    t->next = *head;
    (*head)->prev = t;
    t->prev = NULL;
    *head = t;
}

void insertLeft(struct node **head, int key)
{
    printf("To left of which element should %d be inserted?\n", key);
    int left;
    scanf("%d", &left);
    struct node *p = *head;
    if (p->data == left && p->prev == NULL)
    {
        insert(head, key);
        return;
    }
    struct node *q = NULL;
    struct node *t = getnode();
    t->data = key;
    while (p->data != left)
    {
        if (p == NULL)
        {
            printf("data not found\n");
            break;
        }
        q = p;
        p = p->next;
    }
    t->next = p;
    p->prev = t;
    q->next = t;
    t->prev = q;
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty list");
        return;
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void deleted(struct node **head)
{
    int key;
    struct node *temp = *head;
    if (*head == NULL)
    {
        printf("NO element deleted\n");
        return;
    }
    printf("Enter the node to be deleted:\n");
    scanf("%d", &key);
    if (temp->data == key && (temp->next == NULL && temp->prev == NULL)) 
    {
        free(*head);
        *head = NULL;
        return;
    }
    if (temp->data == key && (temp->prev == NULL && temp->next != NULL))
    {
        temp = temp->next;
        temp->next->prev = NULL;
        free(*head);
        *head = temp;
        return;
    }
    struct node *q = NULL;
    while (temp->data != key && temp != NULL)
    {
        q = temp;
        temp = temp->next;
    }
    if (temp->next == NULL && temp->data == key)
    {
        q->next = NULL;
        temp->prev = NULL;
        free(temp);
        return;
    }
    if (temp->next != NULL && temp->data == key)
    {
        q->next = temp->next;
        temp->next->prev = q;
        free(temp);
        return;
    }
    if (temp == NULL)
    {
        printf("data not found\n");
    }
}

int main()
{
    struct node *head = NULL;
    int choice;
    int key;
    int x = 0;
    while (x != 5)
    {
        printf("Choices\n");
        printf("1-Insert\n");
        printf("2-Insert Left");
        printf("3-Delete node\n");
        printf("4-Display\n");
        printf("5-Exit\n");
        printf("Enter your choices:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted:\n");
            scanf("%d", &key);
            insert(&head, key);
            break;
        case 2:
            printf("Enter the element to be inserted:\n");
            scanf("%d", &key);
            insertLeft(&head, key);
            break;
        case 3:
            // printf("Enter the node to be deleted:\n");
            // scanf("%d", &key);
            deleted(&head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            x = 5;
            // scanf("%d", &key);
            break; // doubt
        }
    }
    return 0;
}