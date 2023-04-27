#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base condition
    if(n==1){
        return 1;
    }

    // int smallProb=factorial(n-1);  f(n)=n*f(n-1);
    // int bigProb=n*smallProb;
    // return bigProb;
    return n*factorial(n-1);
}


int main(){
  int n;//n=5
  cin>>n;
  int ans=factorial(n);
  cout<<ans<<endl;

  return 0;
}


