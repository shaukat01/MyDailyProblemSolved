#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(array[mid]==key){
        return array[mid];
    }
    if(array[mid]>key){
        return binarySearch(array,low,mid-1,key);
    }
       return binarySearch(array,mid+1,high,key);
}

int main(){
    cout<<"Enter the size"<<endl;
  int n;
   cin>>n;
//    int x;
   int array[n];
   for(int i=0;i<n;i++){
       cout<<"enter the array element"<<endl;
       cin>>array[i];
   }
   cout<<"enter the low index"<<endl;
   int low;
   cin>>low;
   cout<<"enter the high element"<<endl;
   int high;
   cin>>high;
   cout<<"enter the search key"<<endl;
   int key;
   cin>>key;
    int result=binarySearch(array,low,high,key);     
  if(result==-1){
      cout<<"element is not found"<<endl;
  }
  else{
       cout<<"Element is found at index :"<<result-1<<endl;
  }
    return 0;
}
