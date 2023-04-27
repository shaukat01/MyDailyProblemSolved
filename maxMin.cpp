#include<bits/stdc++.h>
// #include<limits.h>
using namespace std;


void maxi(int *arr,int n,int i,int& maxx){
 if(i>=n){
    return;
 }
 if(arr[i]>maxx){
    maxx=arr[i];
 }
 maxi(arr,n,i+1,maxx);
} 


void mini(int *arr,int n,int i,int& minn){
 if(i>=n){
    return;
 }
 minn=min(minn,arr[i]);
 mini(arr,n,i+1,minn);
} 


int main(){
  int arr[]={8,7,4,5,6};
  int n=5;
  int i=0;


  int maxx=INT_MIN;
  maxi(arr,n,i,maxx);
  cout<<maxx<<endl;
  int minn=INT_MAX;
  mini(arr,n,i,minn);
  cout<<minn<<endl;
  

   return 0; 
}







