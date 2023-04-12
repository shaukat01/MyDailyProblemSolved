#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
      }
    }
    return true;
}


int main(){
  
     int n;
     cin>>n;
     bool isPrime=checkPrime(n);
     if(isPrime){
         cout<<"prime";;
     }
     else{
        cout<<"Non Primme:";
     }
    return 0;
}