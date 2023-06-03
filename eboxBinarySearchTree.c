// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// void insert(struct node *root, int val)
// {
//     if (root->data < val)
//     {
//         if (root->right)
//         {
//             insert(root->right, val);
//         }
//         else
//         {
//             struct node *n = (struct node *)malloc(sizeof(struct node));
//             n->data = val;
//             n->left = NULL;
//             n->right = NULL;
//             root->right = n;
//             return;
//         }
//     }
//     else
//     {
//         if (root->left)
//         {
//             insert(root->left, val);
//         }
//         else
//         {
//             struct node *n = (struct node *)malloc(sizeof(struct node));
//             n->data = val;
//             n->left = NULL;
//             n->right = NULL;
//             root->left = n;
//             return;
//         }
//     }
// }

// void inorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// void preorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else
//     {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(struct node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else
//     {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }
// // void create(struct node *root)
// // {
// // }

// int main()
// {
//     struct node *root = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the element to be inserted in the tree\n");
//     int val;
//     scanf("%d", &val);
//     root->data = val;
//     root->left = NULL;
//     root->right = NULL;

//     while (1)
//     {
//         char ch[4];
//         printf("Do you want to insert another element?\n");
//         scanf("%s", ch);
//         if (ch[0] == 'n')
//         {
//             break;
//         }
//         printf("Enter the element to be inserted in the tree\n");
//         scanf("%d", &val);
//         insert(root, val);
//     }

//     printf("Inorder Traversal:The elements in the tree are ");
//     inorder(root);
//     printf("\n");
//     printf("preorder Traversal:The elements in the tree are ");
//     preorder(root);
//     printf("\n");
//     printf("preorder traversal:The elements int the tree are ");
//     postorder(root);
//     printf("\n");

//     return 0;
// }






#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

 void pre(struct node *root){
     if (root==NULL){
         return;
     }
     else{
         printf("%d",root->data);
         pre(root->left);
         pre(root->right);
     }
 }     
 
 void ino(struct node *root){
     if(root==NULL){
         return;
     }
     else{
         ino(root->left);
         printf("%d",root->data);
         ino(root->right);
     }
 }

void pos(struct node *root){
    if(root==NULL){
        return;
    }
    else{
        pos(root->left);
        pos(root->right);
        printf("%d",root->data);
    }
}

  void insert(struct node *root,int val){
        if(root->data<val){
            if(root->right){
                insert(root->right,val);
            }
            else{
                struct node *n=(struct node *)malloc(sizeof(struct node));
                n->data=val;
                n->left=NULL;
                n->right=NULL:
                root->right=n;
                return;
            }
        }
        else{
            if(root->left){
                insert(root->left,val);
            }
            else{
                struct node *n=(struct node *)malloc(sizeof(struct node));
                n->data=val;
                n->left=NULL;
                n->right=NULL;
                root->left=n;
                return;
            }
        }
        
  }

int main(){
    struct node *root=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted in the tree\n");
    int val;
    scanf("%d",&val);
      root->data=val;
      root->left=NULL;
      root->right=NULL;
    
    
    while(1){
        char ch[4];
        printf("Do you want to insert another element?\n");
        scanf("%s",ch);
        if(ch[0]=='n'){
            break;
        }
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d",&val);
        insert(root,val);
    }
       printf("Inorder Traversal:The elements in the tree are\n");
       ino(root);
       printf("preorder Traversal:The elements in the tree are\n");
       pre(root);
       printf("Postorder Traversal:The elements in the tree are\n");
       pos(root);
    return 0;
}


