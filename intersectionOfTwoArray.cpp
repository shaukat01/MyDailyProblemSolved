#include<bits/stdc++.h>
using namespace std;


int main(){

vector<int>arr{5.6,6,7,4,8};
vector<int>brr{8,7,4,9};
  

vector<int>ans;
//ans-> 8,4,7


for(int i=0;i<arr.size();i++){
    for(int j=0;j<brr.size();j++){
        if(arr[i]==brr[j]){
     ans.push_back(arr[i]);
        }
    }
}
 

//  for each loop
 for(auto :ans){
    cout<<x<<" ";
 }


    return 0;
}