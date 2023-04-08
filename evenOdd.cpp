#include<bits/stdc++.h>
using namespace std;

bool checkEven(int n){

    // if(n%2==0){  //1st method
if(n&1==0){  //2nd method using bit 
        return true;
    }
    else{
        return false;
    }
}

int main(){

  int n;
  cin>>n;
  

   bool isEven=checkEven(n);
  if(isEven){
    cout<<"even"<<endl;
  }
  else{
    cout<<"odd";
  }
//   cout<<endl;
    return 0;
}



