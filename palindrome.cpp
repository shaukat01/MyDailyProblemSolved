#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
     if(ch>='a' && ch<='z'){
        return ch;
     }
     else{
        char temp=ch-'A'+'a';
        return temp;
     }
}

bool checkPalindrome(char arr[],int n){
   int s=0;
   int e=n-1;
   while(s<=e){
    if(toLowerCase(arr[s])!=toLowerCase(arr[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
   }    
}


int main(){
     int n=5;
     char ch[50];
     cout<<"enter the string"<<endl;
     cin>>ch;
    cout<<checkPalindrome(ch,5)<<endl;
    cout<<toLowerCase('a')<<endl;
    cout<<toLowerCase('A')<<endl;
    return 0;
}