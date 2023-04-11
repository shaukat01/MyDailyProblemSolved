#include<bits/stdc++.h>
using namespace std;


int main(){

int sum=22;
vector<int>arr{11,11,21,1,5,17,9,4,5,6};

for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<","<<arr[j];
        }
    }
    cout<<endl;
}

    return 0;
}
