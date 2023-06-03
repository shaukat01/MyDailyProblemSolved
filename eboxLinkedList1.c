#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
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
    temp->next = NULL;
    temp->data = 0;
}
    return temp;
void insertbegin(struct node **head, int key)
{
    struct node *t = getnode();

        t->data = key;
    if (*head == NULL)
    {
        *head = t;
        return;
    }
    else
    {
        t->next = *head;
        *head = t;
    }
}

void insertrandom(struct node **head, int pos)
{
    struct node *temp = *head;
    int ct = 1;
    while (temp != NULL)
    {
        ct++;
        temp = temp->next;
    }
    if (ct < pos)
    {
        printf("There are less than %d elements in the linked list", pos);
        return;
    }
    int key;
    ct = 1;
    struct node *temp2 = *head;
    printf("Enter the element to be inserted\n");
    scanf("%d", &key);
    if (pos == 1)
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = key;
        n->next = temp2;
        *head = n;
        return;
    }
    pos--;
    while (ct != pos)
    {
        temp2 = temp2->next;
        ct++;
    }
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = key;
    n->next = NULL;
    n->next = temp2->next;
    temp2->next = n;
}

void delete (struct node **head, int key)
{
    struct node *temp = *head;
    if (*head == NULL)
    {
        printf("linked list is empty");
        return;
    }
    //
    if (temp->next == NULL && temp->data == key) //  and first node huuu bus
    {
        free(*head);
        *head = NULL;
        return;
    }

    if(temp->next!=NULL && temp->data == key) // first node ke liyee and second se attach huu
    {
        temp=temp->next;
        free(*head);
        *head = temp;
        return;
    }
     struct node *q = NULL;
      while (temp->data != key)   // while(temp->data!=key && temp->next==NULL) why not this is taken
     {
         q = temp;
         temp = temp->next;
        //  if(temp==NULL)
        //  break;
     }

    if (temp->next != NULL && temp->data == key) // cover middle element
    {
        q->next = temp->next;
        free(temp);
        return;
    }
     if (temp->next == NULL && temp->data == key){    // last node ke liyee
         q->next=NULL;
         free(temp);
         return;
     }

    
}

void search(struct node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
        {
            printf("%d is present in the linked list", key);
            return;
        }
        head = head->next;
    }
    printf("%d is not present in the linked list", key);
}

void display(struct node *head)
{

    printf("{");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("}");
    printf("\n");
}

int main()
{
    struct node *head = NULL;
    int x = 0;
    int choice;
    int key;
    while (x != 6)
    {
        printf("1 Add at Beginning\n");
        printf("2 Add at position\n");
        printf("3 Delete any node\n");
        printf("4 Search and update\n");
        printf("5 Display\n");
        printf("6 Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted\n");
            scanf("%d", &key);
            insertbegin(&head, key);
            break;

        case 2:
            printf("Enter the position at which you want to add another node\n");
            scanf("%d", &key);
            insertrandom(&head, key);
            break;
        case 3:
            printf("Enter the element to be deleted\n");
            scanf("%d", &key);
            delete (&head, key);
           display(head);
            break;
        case 4:
            printf("Enter the element to be searched\n");
            scanf("%d", &key);
            search(head, key);
        case 5:
            printf("Elements in the List are \n");
            display(head);
            break;
        case 6:
            x = 6; // doubt
            break;
        }
    }

    return 0;
}
