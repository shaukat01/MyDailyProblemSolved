#include<iostream>
using namespace std;


class node{
   public:
   int data;
   node *next;
   
     node(int data){
        this->data=data;
        this->next=NULL;
     }

     ~node(){
    //  int value=this->data;
     //relaesing memory
     if(this->next!=NULL){
        delete next;
        this->next=NULL;
     }
     cout<<"Releasing data value is: "<<this->data<<endl;
     }
 };


   void insertAthead(node* &head,int data){
     node *n=new node(data);
     n->next=head;
     head=n;
   }
  

  void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
  }


  void insertAtTail(node* &head,int data){
    node *temp=head;
    node* n = new node(data);
        n->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
            }
        temp->next=n;
  }


    void insertAtPosition(node* &head,int data,int pos){
        node *n=new node(data);
        n->next=NULL;
        node *temp=head;
        int count=1;
        if(pos==1){
            insertAthead(head,data);
            return;
        }
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
      n->next=temp->next;
       temp->next=n;
    }
   
     void deleteNode(node* &head,int pos){
       if(pos==1){
       node *temp=head;
       head=head->next;

       temp->next=NULL;   // it is used to for regrading memory releasing
       delete temp;       // releasing memory
      }
      else{
            node* current=head;
            node *previous=NULL;
         int count=1;
         while(count<pos){
          previous=current;
          current=current->next;
          count++;
         }
         previous->next=current->next;

         current->next=NULL;  // it is used to for regrading memory releasing 
         delete current;
      }
     }

int main(){

  node *n=new node(10);
  cout<<n->data<<endl;
  cout<<n->next<<endl;

   node *head=n;
   node *tail=n;
   print(head);
   insertAthead(head,12);
   print(head);
   insertAthead(head,15);
   print(head);
   insertAtTail(head,20);
   print(head);
  insertAtPosition(head,28,2);
  print(head);
  deleteNode(head,1);
  print(head);
    return 0;
}