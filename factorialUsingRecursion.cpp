
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
    return 1;
    if(n==1)
    return 1;

    return n*factorial(n-1);
}

int main(){
      
   int n;
   cout<<"Enter the value u want to enter: "<<endl;
   cin>>n;

   int ans=factorial(n);
   cout<<ans<<endl;        
    return 0;
}