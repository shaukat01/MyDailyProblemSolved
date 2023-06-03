#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

// below programme is for tree
// struct node *root=NULL;

//   void treeCreate(){
//       struct node *p,*t;
//       int x;
//       struct cQueue cQ;
      
//   }

struct node{
    int data;
    struct node*left;
    struct node*right;
};

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








//    below programe is for queue and chnging has done
// struct node{
//   struct node *lchild;
//   struct data;
//   struct node *rchild;
// };

// struct cQueue
// {
//     int size;
//     int rear;
//     int front;
//     struct node **arr;  
// };

//      void enqueue(struct cQueue *cQ,struct node *x){
//         if((cQ->rear+1)%cQ->size==cQ->front)
//         printf("queue is full");
//         else{
//             cQ->rear=(cQ->rear+1)%cQ->size;
//             cQ->arr[cQ->rear]=x;
//         }
//      }

//      struct node *dequeue(struct cQueue *cQ){
//          struct node* x=NULL;
//        if(cQ->front==cQ->rear)
//        printf("Queue is empty");
//        else{
//            cQ->front=(cQ->front+1)%cQ->size;
//          x=cQ->arr[cQ->front];
//        }
//        return x;
//      }

//     int isEmpty(struct cQueue cQ){
//         return cQ.front==cQ.rear;
//     }

//    void create(struct cQueue *cQ,int size){
//    cQ->size=size;
//    cQ->front=0;
//    cQ->rear=0;
//    cQ->arr=(struct node **)malloc(cQ->size*sizeof(struct node *));
//    }
    


  //  circular queue using array nothing was changed
    struct cQueue
{
    int size;
    int rear;
    int front;
    int *arr;  
};

  
     void enqueue(struct cQueue *cQ,int x){
        if((cQ->rear+1)%cQ->size==cQ->front)
        printf("queue is full");
        else{
            cQ->rear=(cQ->rear+1)%cQ->size;
            cQ->arr[cQ->rear]=x;
        }
     }

     int dequeue(struct cQueue *cQ){
         int x=-1;
       if(cQ->front==cQ->rear)
       printf("Queue is empty");
       else{
           cQ->front=(cQ->front+1)%cQ->size;
         x=cQ->arr[cQ->front];
       }
       return x;
     }

   void create(struct cQueue *cQ,int size){
   cQ->size=size;
   cQ->front=0;
   cQ->rear=0;
   cQ->arr=(int *)malloc(cQ->size*sizeof(int ));
   }

   void display(struct cQueue cQ){
       
   }



int main(){
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root->data=1;
    struct node *l=(struct node*)malloc(sizeof(struct node));
     l->left=NULL;
    l->right=NULL;
    l->data=2;
    struct node *r=(struct node*)malloc(sizeof(struct node));
    r->left=NULL;
    r->right=NULL;
    r->data=3;
    root->left=l;
    root->right=r;

      


        struct cQueue cQ;
  create(&cQ,5);
     enqueue(&cQ,10);
    enqueue(&cQ,20);
    enqueue(&cQ,30);
    enqueue(&cQ,40);
    display(cQ);
    dequeue(&cQ);





    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    return 0;
}





    // int main(){

    //     treeCreate();
    //    preOrder(root);
    //    printf("\n");
    //    postorder(root);


    //     return 0;
    // }
    




