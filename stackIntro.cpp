#include<bits/stdc++.h>
using namespace std;


int main(){
   
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(8); 
     

       cout<<s.top()<<endl;
     // cout<< s.pop()<<endl;  //this is wrong we never do

        s.pop();
        cout<<s.top()<<endl;

           if(s.empty()){
          cout<<"Stack is empty: "<<endl;
           }
           else{
          cout<<"stack is not empty: "<<endl;
           }

          cout<<"Size of stack is: "<<s.size()<<endl;
    return 0;
}