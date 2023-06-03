#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    struct node *lChild;
    int data;
    struct node *rChild;
} *root = NULL;

void insert(int key)
{
    struct node *t = NULL;
    struct node *r, *p; //*r follow t and *p to creartion of new node
    if (root == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lChild = p->rChild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lChild;
        else if (key > t->data)
            t = t->rChild;
        else
            return;
    }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = key;
    p->lChild = p->rChild = NULL;
    if (key < r->data)
        r->lChild = p;
    else
        r->rChild = p;
}

void inOrder(struct node *p)
{
    if (p == NULL)
        return;
    inOrder(root->lChild);     // explore the left part first
    printf("%d ", root->data); // print current root data
    inOrder(root->rChild);     // explore the right part of tree
}

// searching using iterative method
struct node *search(int key)
{
    struct node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lChild;
        else
            t = t->rChild;
    }
    return NULL;
}
//  inserting a node through a recursive
struct node *rInsert(struct node *tree, int key)
{
    struct node *t = NULL;
    if (tree == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->lChild = t->rChild = NULL;
        return t;
    }
    if (key < tree->data)
        tree->lChild = rInsert(tree->lChild, key);
    else if (key > tree->rChild)
        tree->rChild = rInsert(tree->rChild, key);
}

int height(struct node *tree)
{
    int x, y;
    if (tree == NULL)
        x = height(tree->lChild);
    y = height(tree->rChild);
    return x > y ? x + 1 : y + 1;
}

struct node *delete (struct node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (p->lChild == NULL && p->lChild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lChild = delete (p->lChild, key);
    else if (key < p->rChild)
        p->rChild = delete (p->rChild, key);
    else
    {
    }
}

int main()
{

    // for iterative insert
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);

    //    for recursive insert
    root = rInsert(root, 20);
    rInsert(root, 5);
    rInsert(root, 20);
    rInsert(root, 8);
    rInsert(root, 30);

    inOrder(root);
    printf("\n");

    struct node *temp = search(20);
    if (temp != NULL)
        printf("element %d is found\n", temp->data);
    else
        printf("Element is not found");

    return 0;
}