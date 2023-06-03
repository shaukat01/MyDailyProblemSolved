 #include<stdio.h>
#include<iostream>
using namespace std;
class node{                        // node ka dibba
    public:
    int data;
    node* next;
    node(int val){              
        data=val;
        next=NULL;
    }
};

void insertAtTail(node*&head,int a){     //we are atteching a node at tail 
    node*temp=head;

    if(temp == NULL)
    {
        node* n = new node(a);
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*last=new node(a);
    temp->next=last;
}

void display(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<" NULL";
}

int main(){
    node*head;
    node*n=new node(1); // data->1 next=NULL;
    head=n;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
}