#include<iostream>
using namespace std;


void update(int **p2){

   p2=p2+1;  //no change will reflext in main function
//    *p2=*p2+1;  //kuch kuch change hooga
//    **p2=**p2+1;   //kuch kuch change hooga bus

}


int main(){
  int i=5;
  int *p=&i;
  int **p2=&p;

cout<<endl;
cout<<i<<endl;
cout<<p<<endl;
cout<<p2<<endl;

  update(P);
   
cout<<endl;
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p<<endl;

    return 0;
}