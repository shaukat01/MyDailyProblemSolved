#include<bits/stdc++.h>
using namespace std;


bool checkSorted(vector<int>&arr,int n,int i){
if(i==n-1){
    return true;
}
if(arr[i+1]<arr[i]){
    return false;
}
 return checkSorted(arr,n,i+1);

}


int main(){
vector<int>arr{4,5,6,7,9};
 int n=arr.size();
 int i=0;
int ans=checkSorted(arr,n,i);
 if(ans){
    cout<<"Array is sorted:";
 }
 else{
    cout<<"Array is not Sorted: ";
 }
    return 0;
}







