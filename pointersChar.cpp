#include<iostream>
using namespace std;


int main(){

  int arr[5]={1,4,2,6,7};
  char ch[5]="abcd";
    //   or
        // char ch[4]={'a','b','c','d'};   //doubt
       cout<<arr<<endl;
         cout<<ch<<endl;
    
    int *p=&arr[0];
    char *c = &ch[0];
    cout<<p<<endl;
    cout<<c<<endl;
    cout<<*p<<endl;
    cout<<*c<<endl;

   cout<<endl<<endl;
   char temp = 'z';
   cout<<temp<<endl;
   char *p1 = &temp;
   cout<<p1<<endl;
   cout<<*p1<<endl;

 return 0;
}