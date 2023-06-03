#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int val)
{
    struct node *root =(struct node*)malloc(sizeof(struct node));
    root->data = val;
    root->left = NULL;
    root->right = NULL;
}

void printInorder(struct node *root)
{
    if(root==NULL) return;

    printInorder(root->left);
    printf("%d ",root->data);
    printInorder(root->right);
}

struct node *insertinBST(struct node* root, int val)
{
    if(root==NULL)
    {
        root = newnode(val);
        return root;
    }

    if(val<root->data)
    {
        root->left = insertinBST(root->left,val);
    }
    else
    {
        root->right = insertinBST(root->right, val);
    }
    return root;
}

struct node* treesort(int arr[], int n)
{
    struct node* root = newnode(arr[0]);
    for(int i=1; i<n; i++)
    {
        root = insertinBST(root,arr[i]);
    }

    printInorder(root);
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];  //input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // struct node* root = NULL;
    treesort(arr,n);
    return 0;
}