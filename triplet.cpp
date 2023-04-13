#include<bits/stdc++.h>
using namespace std;


int main(){

int sum=23;
vector<int>arr{11,11,21,1,5,17,9,4,5,6};

for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        for(int k=j+1;k<arr.size();k++){
        if(arr[i]+arr[j]+arr[k]==sum){
            cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
        }
    }
    }
     
}

    return 0;
}
