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


void insertNodeHead(Node *&head, int data) {
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
  insertNodeHead(head, 40);
  insertNodeHead(head, 50);
  insertNodeHead(head, 60);

  print(head);
  return 0;
}





