#include<bits/stdc++.h>
using namespace std;

bool comparator(char first,char second){
  return first>second;
}

int main(){

   string s="babbar";
   sort(s.begin(),s.end(),comparator);
   cout<<s<<endl;

   vector<int>v{5,4,6,8,7};
   sort(v.begin(),v.end(),comparator);
   for(auto i:v){
    cout<<i<<" ";
   }
   cout<<endl;



    return 0;
}

