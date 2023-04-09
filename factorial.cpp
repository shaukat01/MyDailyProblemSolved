#include<bits/stdc++.h>
using namespace std;


long long int fact(long long int n){
    long long int fact=1;
    for(long long int i=1;i<=n;i++){
      fact=fact*i;
    }
    return fact;
}


int main(){
  long long int n;
  cin>>n;
  cout<<fact(n)<<endl;
    return 0;
}

