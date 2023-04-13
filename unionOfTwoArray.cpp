#include<bits/stdc++.h>
using namespace std;


int main(){

   int arr[5]={5,6,8,4,2};

   int brr[6]={5,4,2,6,8,7};
 

   vector<int>ans;


    for(int i=0;i<5;i++){
  ans.push_back(arr[i]);
    }



    for(int j=0;j<6;j++){
        ans.push_back(brr[j]);
    }



    for(int i=0;i<ans.size();i++){    //ans.size();
          cout<<ans[i]<<" ";
    }
    return 0;
}






