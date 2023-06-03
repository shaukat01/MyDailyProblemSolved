#include<iostream>
using namespace std;


class node{
public:
int data;
node* next;

   node(int d){
    this->data=d;
    this->next=NULL;
   }
   
   ~node(){
    int val=this->data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<val<<endl;
   } 
};


void insertNode(node* &tail,int ele,int d){
    //if linked list is empty
      if(tail==NULL){
        node* n=new node(d);
        tail=n;
        n->next=n;
      }
     else{
      node *curr=tail;
      while(curr->data!=ele){
      curr=curr->next;
      }      
       node* temp=new node(d);
       temp->next=curr->next;
       curr->next=temp;
     }  
}

void deleteNode(node* &tail,int d){
     if(tail==NULL){
       cout<<"Linked list is not present:"<<endl;
           return;
       }
         else{
       node *prev=tail;
       node* curr=prev->next;
       while(curr->data!=value){
        prev=curr;
        curr=curr->next;
       }
       if(curr==pre){
        tail=NULL;
       }
       pre->next=curr->next;
       curr->next=NULL;
       delete curr;
           }

}
 
void print(node* tail){
   node *temp=tail;
   i(tail==NULL){
    cout<<"linked list is empty:"<<endl;
   }
  do{
   cout<<tail->data<<" ";
   tail=tail->next;
  }while(tail!=temp);
  cout<<endl; 
}

int main(){

   node *tail=NULL;
   insertNode(tail,5,300);
   print(tail);
       insertNode(tail,300,500);
   print(tail);
   deleteNode(tail,300);
    return 0;

}