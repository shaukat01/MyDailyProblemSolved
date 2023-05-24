#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>v;
     int n;
  cout<<"Enter value of n: "<<endl;
  cin>>n;
  cout<<"Enter the array elments"<<endl;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
 cout<<"The elements are: "<<endl;
  for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
  }
  cout<<endl;
 
    return 0;
}