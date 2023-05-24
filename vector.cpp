#include<iostream>
#include<vector>
using namespace std;


void printVec(vector<string>&v){
    cout<<"The string is: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
  vector<string>v;
  int n;
  cout<<"Enter value of n: "<<endl;
  cin>>n;
  cout<<"Enter the string"<<endl;
      string s;
  for(int i=0;i<n;i++){
      cin>>s;
      v.push_back(s);
  }
  printVec(v);
    return 0;
}
