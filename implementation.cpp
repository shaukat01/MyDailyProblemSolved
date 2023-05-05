#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(){
  this->data=0;
  this->next=NULL;
  this->prev=NULL;
  }
  Node(int data){
   this->data=data;
   this->next=NULL;
   this->prev=NULL;
  }
  ~Node(){
    cout<<"The deleted value is: "<<this->data<<"deleted"<<endl;
  }
};


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int getLength(Node* &head){
 int len=0;
 Node* temp=head;
 while(temp!=NULL){
    temp=temp->next;
    len++;
 }
 return len;
}


void insertHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
       Node* newNode=new Node(data);
       tail=newNode;
       head=newNode;
    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}


void insertTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
    Node* newNode=new Node(data);
    tail=newNode;
    head=newNode;
    }
   else{
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
   }
}


void insertPosition(Node* head,Node* tail,int data,int position){
    if(head==NULL){
    Node* newNode=new Node(data);
    tail=newNode;
    head=newNode;
    }
    else{
        if(position==1){
            insertHead(head,tail,data);
            return;
        }
        int len=getLength(head);
        if(position>len){
           insertTail(head,tail,data);
           return;
        }
        //insert at middle
        //step1 ->maintain prev and curr
        int i=1;
        Node* prev=head;
        while(i<position-1){
          prev=prev->next;
          i++;
        }
        Node* curr=prev->next;
         //creating a node
         Node* newNode=new Node(data);
         //last step
         newNode->prev=prev;
         prev->next=newNode;
         newNode->next=curr;
         curr->prev=newNode;
    }
}

void deleteNode(Node* head,Node* tail,int data,int position){
    //there is no node
   if(head==NULL){
    cout<<"Doubly Linked list is empty"<<endl;
    return;
   }
   //there is only one node
   if(head->next==NULL){
    Node* temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
    return;
   }
    //many node present but we are deleting of position 1
   if(pos==1){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;
   }
   //deleting last node
   int len=getLength(head);
   if(position>=len){
    Node* temp=tail;
    tail=tail->prev;//doubt
    temp->prev=NULL;
    tail->next=NULL;
    return;
   }
  
 //deleting between first and last node
 int i=1;
 Node* left=head;
 while(i<position-1){
    left=left->next;
    i++;
 }
//  giving the position
 Node* curr=left->next;
 Node* right=curr->next;

  //deleting
 left->next=right;
 right->prev=left;

 curr->next=NULL:
 curr->prev=NULL:
 delete curr;

} 

int main(){
  
  Node* first=new Node(10);
  Node* second=new Node(20);
  Node* third=new Node(30);
  // Node* fourth=new Node(40);

    Node*head=first;
    Node* tail=third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;
 
  print(head);
  cout<<endl;
  insertHead(head,tail,101);
  print(head);
  cout<<endl;
  insertTail(head,tail,501);
  print(head);
  cout<<endl;
  insertPosition(head,tail,401,0);//doubt not working for i=1 and 2
  print(head);
  cout<<endl;
  
   deleteNode(head,tail,20);
   print(head);
   cout<<endl;

    return 0;
}

