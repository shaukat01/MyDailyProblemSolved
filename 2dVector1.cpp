#include<bits/stdc++.h>
using namespace std;


int main(){

 vector<vector<int>>arr;

 vector<int>a{5,4,6,2,1};
 vector<int>b{6,2,55,6,4,9};
 vector<int>c{5,6,2,1};
 vector<int>d{0};

  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  arr.push_back(d);

  for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

    return 0;
}