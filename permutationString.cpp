#include<bits/stdc++.h>
using namespace std;

  //without bbacktracking //the only difference of backtracking
void permutation(string str,int i){
  //base case
  if(i>=str.length()-1){
  cout<<str<<endl;
    return;
  }
  
    for(int j=i;j<str.length();j++){
       //swap
       swap(str[i],str[j]);
       //permutation
       permutation(str,i+1);
     

    } 
}

//with bbacktracking
void permutation(string& str,int i){
  //base case
  if(i>=str.length()-1){
  cout<<str<<endl;
    return;
  }
  
    for(int j=i;j<str.length();j++){
       //swap
       swap(str[i],str[j]);
       //permutation
       permutation(str,i+1);
       // applying backtracking
     swap(str[i],str[j])

    } 
}


int main(){
  string str="abc";
  int i=0;
  permutation(str,i);

    return 0;
}







