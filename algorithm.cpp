#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

vector<int>v;
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

cout<<binary_search(v.begin(),v.end(),6);

int a=5;
int b=8;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    string s="abcd";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
  cout<<s<<endl;

    return 0;
}