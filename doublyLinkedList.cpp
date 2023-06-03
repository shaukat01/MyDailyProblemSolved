#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
    }

    ~node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<val<<endl;
    }
};

 void print(node *head){
        node *temp=head;
        while(temp!=NULL){
     cout<<temp->data<<" ";
       temp=temp->next;
        }
        cout<<endl;
    }

   int getLength(node *head){
    int len=0;
   node *temp=head;
   while(temp!=NULL){
     len++;
     temp=temp->next;
   }
   return len;
   }

   void insertAthead(node* &head,int d){
    node *temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
   }

void insertAtTail(node* &tail,int d){
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=temp;
    temp->next=NULL;
    tail=temp;
}

void insertAtPosition(node* &tail,node* &head,int pos,int d){
if(pos==1){
    insertAthead(head,d);
    return;
}
    node *temp=head;
    int count=1; 
    while(count<pos-1){
    temp=temp->next;
    count++;
   }
   
   if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
   }

   node *n=new node(d);
    n->next=temp->next;
    temp->next->prev=n;
    n->prev=temp;
    temp->next=n;
}


void deleteNode(node* &head,int pos){
    if(pos==1){
        node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{

        node *curr=head;
        node *pre=NULL;
        int count =0;
        while(count<pos){
            pre=curr;
            curr=curr->next;
            count++;
        }

       curr->prev=NULL;
       pre->next=curr->next;
       curr->next=NULL;
    //    curr->next->prev=pre;

    }
}


int main(){
   node *head=new node(10);
   node *tail=head;
   print(head);
   cout<<endl;
   int x=getLength(head);
   cout<<x<<endl;
   insertAthead(head,13);
   print(head);
   insertAtTail(tail,25);
   print(head);
   insertAtPosition(tail,head,2,100);
   print(head);
      insertAtPosition(tail,head,1,200);
   print(head);
   deleteNode(head,2);
   print(head);
    return 0;
}