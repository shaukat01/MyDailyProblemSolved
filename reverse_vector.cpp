#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0;
    int e =v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

vector<int>v;

 vector<int>(5); 
 vector<int>(9);
  vector<int>(7);
   vector<int>(57;
    vector<int>(3);

vector<int> ans=reverse(v);
print(ans);


    return 0;
}