#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

void insert(node *root, int val)
{
    if (root->data < val)
    {
        if (root->right)
        {
            insert(root->right, val);
        }
        else
        {
            node *n = (node *)malloc(sizeof(node));
            n->data = val;
            n->left = NULL;
            n->right = NULL;
            root->right = n;
            return;
        }
    }
    else
    {
        if (root->left)
        {
            insert(root->left, val);
        }
        else
        {
            node *n = (node *)malloc(sizeof(node));
            n->data = val;
            n->left = NULL;
            n->right = NULL;
            root->left = n;
            return;
        }
    }
}

void paths(node*root,int arr[],int i){
    if(root==NULL) return;
    arr[i]=root->data;
    paths(root->left,arr,i+1);
    paths(root->right,arr,i+1);
    if(root->left==NULL && root->right==NULL){
        for(int k=0;k<=i;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
}


void inorder(node*root){
    if(root==NULL) return ;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main()
{

     node *root = ( node *)malloc(sizeof( node));
    printf("Enter the element to be inserted in the tree\n");
    int val;
    scanf("%d", &val);
    root->data = val;
    root->left = NULL;
    root->right = NULL;

    while (1)
    {
        char ch[4];
        printf("Do you want to insert another element?\n");
        scanf("%s", ch);
        if (ch[0] == 'n')
        {
            break;
        }
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d", &val);
        insert(root, val);
    }
    printf("The elements in the tree are ");
    inorder(root);
    printf("\n");
    printf("The root to leaf paths in the tree are\n");
    int arr[20];
    paths(root,arr,0);
    return 0;
}


