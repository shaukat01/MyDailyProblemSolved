#include<bits/stdc++.h>
using namespace std;
     
  bool checkLoop(Node* head){
   unordered_map<node*,bool>vis; 
       Node* temp=head;

       while(temp!=NULL){
        if(vis.find() != vis.end()){
            vis[temp]=true;
        }
        else{
            return true ;
        }
        temp=temp->next;
       }
       return false;
  } 
      

