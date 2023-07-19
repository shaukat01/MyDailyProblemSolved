#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string str="RajasthanDelhi";
    unordered_map<char,int>m;

    for(int i=0;i<str.length();i++){
        char ch=str[i];
         m[ch]++; 
    }

    //printing
    for(auto i:m){
        cout<< i.first<<" "<< i.second <<endl;
    }
     

    return 0;
}