#include<bits/stdc++.h>
using namespace std;


void printSub(string str,string output,int i){
    // cout<<"hello"<<endl;
  if(i>=str.length()){
    cout<<output<<endl;
    return;
  }
  //exclude
  printSub(str,output,i+1);
  //include
  printSub(str,output+str[i],i+1);
}


int main(){
   string str="abc";
   string output="";

   int i=0;
   printSub(str,output,i);

    return 0;
}








