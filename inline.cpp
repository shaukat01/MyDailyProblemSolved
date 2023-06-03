#include<iostream>
using namespace std;


//benefits of inline function is that it will not take stack no function call not taken extra memory
inline getMax(int& a,int &b){
   return (a>b) ? a : b;  //this is one line code 
}


int main(){

   int a=1;
   int b=2;
   int ans=getMax(a,b);  //here this is (a>b) ? a : b; directly placed in place of getMax(a,b) no function call is happen  
   cout<<ans<<endl;

   int c=4;
   int d=3;
   ans=getMax(c,d);   //here also this is (a>b) ? a : b; directly placed in place of getMax(a,b) no function call is happen 
   cout<<ans<<endl;

    return 0;
}