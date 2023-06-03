#include<iostream>
using namespace std;

int main(){

    // int *p = 0; //it is not true memory doesn't exit like this so we cant print it
    // cout<< *p <<endl;
     
    // 1st method 
    int i = 5;
    int *q = &i;
    cout<<sizeof(q)<<endl;
    cout<< q <<endl;
     cout<< *q <<endl;

     //2nd method
     int *p=0;
     p=&i;
     cout<< p <<endl;
     cout<< *p <<endl;

    //above both method is correct 
    int num=6;
    int a=num;
    cout<<"a befor: "<< num <<" "<<a<<endl;
    a++;
    cout<<"a after: "<<num <<" "<< a <<endl;

    int *p1 = &num;
    cout<<"before"<<num <<endl;
    (*p1)++;
    cout<<"after "<<num<<endl;


    //copying  a pointer
    int *q1=p1;   // it points to same thing
    cout<< p1 <<" "<<q1<<endl;
    cout<<*p1 <<"  "<<*q1<<endl;

    int j=3;
    int *t = &j;
    cout<<"hi"<<endl;
     cout<<t<<endl;
     cout<<*t<<endl;
     *t=*t+1;
     cout<<t<<endl;
     cout<<*t<<endl;
     t=t+1;   // it points to next consecutive integer
   cout<<endl<<endl;
     cout<<t<<endl; 
     cout<<*t<<endl;  //it gives garbage vlaue 

       t=t+1;
   cout<<endl<<endl;
     cout<<t<<endl;
     cout<<*t<<endl;
    return 0;
}