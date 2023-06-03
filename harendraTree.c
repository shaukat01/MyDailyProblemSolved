#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include "queueheaderfile.h"
#include<stdbool.h>
// #include "queueheaderfile.h"
// basci structure of tree 
// left,right,root
// root -> int

// typedef struct node{
//     int data;
//     struct node*left;
//     struct node*right;
// }node;

// preorder traversal
void preorder(struct node* root){
    if(root==NULL) return;
    printf("%d ",root->data); // print data of current node
    preorder(root->left); //explore left part of tree
    preorder(root->right); //explore right part of tree 
}

// inorder traversal
void inorder(struct node* root){
    if(root==NULL) return;
    inorder(root->left); //explore the left part first
    printf("%d ", root->data); // print current root data
    inorder(root->right); // explore the right part of tree 
}

// postorder traversal
void postorder(struct node*root){
    if(root==NULL) return;
    postorder(root->left); //exp left part of tree
    postorder(root->right); //exp right part of tree
    printf("%d ",root->data);
}

// level order traversal
// void levelOderTraversal(struct node*root){
// }
node* TreeCreate(){
    // root ka mamla
    node*root=(node*)malloc(sizeof(node));
    root->left=NULL;root->right=NULL;
    printf("Enter the data of root\n");
    int val; scanf("%d",&val);
    root->data=val;

    // queue<node*>q;
    struct queue q;
    create(&q);
    enqueue(&q,root);

    while(isempty(q)){
        node*temp=dequeue(&q);
    
        printf("Do you want to insert the left or right child ?\n");
        int ans; scanf("%d",&ans);
        if(ans==1){
            // left ka mamla
            printf("Enter the value of left child\n");
            int lc; scanf("%d",&lc);
            node*leftchild=(node*)malloc(sizeof(node));
            leftchild->data=lc;
            leftchild->left=NULL; leftchild->right=NULL;
            temp->left=leftchild;
            enqueue(&q,leftchild);
            // right ka mamla
            printf("Enter the value of right child\n");
            int rc; scanf("%d",&rc);
            node*rightchild=(node*)malloc(sizeof(node));
            rightchild->data=rc;
            rightchild->left=NULL;
            rightchild->right=NULL;
            temp->right=rightchild;
            enqueue(&q,rightchild);
        }
        else break;
    }
    return root;
}

int main(){
    node*root=TreeCreate();
    preorder(root);
    return 0;
}