#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int>&arr,int key,int s,int e){
    if(s>e)
      return -1;

  int mid =(s+e)/2;

  if(arr[mid]==key){
    return mid;

    if(arr[mid]>key){
        return binarySearch(arr,key,s,mid-1); 
    }
    else{
        return binarySearch(arr,key,mid+1,e);
    }
  }
}


int main(){

   vector<int>arr{8,4,5,6,7,8,9};
   int target=98;
   int n=arr.size();
   int s=0;
   int e=n-1;

   int ans=binarySearch(arr,target, s,e);

   cout<<"ans is:"<<ans<<endl;
    return 0;
}








