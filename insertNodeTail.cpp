#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node() {
    this->data = data;
    this->next = NULL;
  }
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};


void insertNodeHead(Node *&head,Node* &tail,int data) {
  if(head==NULL){
   Node *newNode=new Node(data);
   head=newNode;
   tail=newNode;
  }
 else{
   // first step
  Node *newNode = new Node(data);
  // second step
  newNode->next = head;
  // last step
  head = newNode;
 }
}

void insertNodeTail(Node* &head,Node* &tail,int data){
  if(tail==NULL){
  Node *newNode=new Node(data);
   head=newNode;
   tail=newNode;
  }
  else{
    //1st step
    Node *newNode=new Node(data);
    //2nd step
    tail->next=newNode;
    //last step
    tail=newNode;
  }
}



void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  // Node *head=new Node(30);
  Node *head = NULL;
  Node *tail=NULL;
  insertNodeHead(head,tail,40);
  insertNodeHead(head,tail, 50);
  insertNodeHead(head,tail, 60);

  insertNodeTail(head,tail,70);
  insertNodeTail(head,tail,80);

  print(head);
  return 0;
}





