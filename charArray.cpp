#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
    length++;
    i++;
    }
    return length;
}

void reverse(char arr[])  //time complexity is o(n) due to swap and space complexity is o(1)
{
    int i=0;
    int n=getLength(arr);
    int j=n-1;
    while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }
}

void replaceSpaces(char name[]){   //time complexity is o(n) and space is o(1)
  int i=0;
  int n=strlen(name);
  for(int i=0;i<n;i++){
    if(name[i]==' '){
        name[i]='@';
    }
  }
}

int checkPalindrome(char arr[]){
 int i=0;
 int j=n-1;
 int n=strlen(arr);

 while(i<=j){
  if(arr[i]!=arr[j]){
    return false;
  }
  else{
    i++;
    j--;
  }
 }
 return true;    
}

 int convertUc(char arr[]){
    int n=getLength(arr);
 //for converting into lower case
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';
    }
    //for converting uppercase
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'A'+'a';
 }
}

int main(){
        // char ch[100];
    // ch[0]='a';
    // ch[1]='b';
    // cin>>ch[3];

    // cout<<ch[0]<<endl;
    // cout<<ch[1]<<endl;
    // cout<<ch[2]<<endl;

/*
    char name[100];  //space complexity is o(1)
    cin>>name;
    for(int i=0;i<10;i++){
        cout<<"index "<<i<<"value: "<<name[i]<<endl;   
    }
   int value=(int)name[7];
   cout<<"value is: "<<value<<endl;   //ascii value of null character(\n) is 0
*/

/*
 char arr[100];
//  cin>>arr;
//  cout<<arr;
//   getline(cin,arr);
  cin.getline(arr,29);
  cout<<arr<<endl;
  */ 
// char arr[100];
// cin>>arr;
// int ans=getLength(arr);
// // cout<<"The length is: "<<ans<<endl;
// // cout<<strlen(arr)<<endl;

// cout<<"The Reverse is: "<<reverse(arr)<<endl;
//   char sentence[100];
//   cin.getline(sentence,100);

//   replaceSpaces(sentence);
//   cout<<"Printing sentences is: "<<sentence<<endl;
//   cout<<"just checking: "<<replaceSpaces(sentence)<<endl; //gives error

// char arr[100]="hahha";
// cout<<"Palindrome check: "<<checkPalindrome(arr)<<endl;

char arr[100]="babbar";
convertUc(arr);
cout<<arr<<endl;
cout<<convertUc(arr)<<endl;


    return 0;
}

