// #include <stdio.h>
// #include <malloc.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *getnode()
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     if (temp == NULL)
//         return NULL;
//     temp->next = NULL;
//     temp->data = 0;
//     return temp;
// }

// void insertlast(struct node **head, struct node **last, int key)
// {
//     struct node *t = getnode();
//     if (*head == NULL)
//     {
//         *head = t;
//         return;
//     }
//     t->data = key;
//     t->next = NULL;
//     (*last)->next = t;
//     *last = t;
// }


// void display(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d", head->data);
//         head = head->next;
//     }
//     printf("\n");
// }

// void reverse(struct node **head)
// {
//     struct node *r = NULL, *q = NULL, *p = *head;
//     while (p != NULL)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     *head = q;
// }

// int main()
// {
//     printf("Enter the value\n");
//     int a;
//     scanf("%d", &a);
//     struct node *head = getnode();
//     head->data = a;
//     head->next = NULL;
//     struct node *last = head;
//     while (1)
//     {
//         printf("Do you want to add another node\n");
//         char ch[100];
//         scanf("%s", ch);
//         if (ch[0] == 'n')
//         {
//             break;
//         }
//         else
//         {
//             printf("Enter the value\n");
//             scanf("%d", &a);
//             insertlast(&head, &last, a);
//         }
//     }
//     printf("the elements in the linked list are ");
//     display(head);
//     printf("\n The elements in the reversed linked list are ");
//     reverse(&head);
//     display(head);

//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};

 struct node *getnode(){
     struct node *temp=(struct node *)malloc(sizeof(struct node));
     if(temp==NULL){
         return NULL;
     }
     temp->data=0;
     temp->next=NULL;
     return temp;
 }
 
 
 void display(struct node *head){
       while(head != NULL){
           printf("%d",head->data);
           head=head->next;
       }
       printf("\n");
   }
   
  void insertLeft(struct node **head,struct node **last,int key){
       struct node *t=getnode();
       if(*head==NULL){
           *head=t;
           return;
       }
     t->data=key;
     t->next=NULL;
     (*last)->next=t;
     *last=t;
  } 
  
  
  void reverse(struct node **head){
      struct node *p=*head,*q=NULL,*r=NULL;
      while(p!=NULL){
          r=q;
          q=p;
          p=p->next;
      q->next=r;
      }
      *head=q;
  }
  
  
int main(){
     printf("Enter the value\n");
      int key;
        scanf("%d",&key);
    // int x=0;
    struct node *head=getnode();
    head->next=NULL;
    head->data=key;
    struct node *last=head;
    while(1){
        printf("Do you want to add another node?Type Yes/No\n");
    char ch[100];
        scanf("%s",ch);
        if(ch[0]=='n'){
            break;
        }
        else{
            printf("Enter the value\n");
            scanf("%d",&key);
            insertLeft(&head,&last,key);
            break;
        }
    }
    printf("The elements in the linked list are \n");
    display(head);
    printf("The elements in the reverse linked list are ");
    reverse(&head);
    display(head);
    return 0;
}