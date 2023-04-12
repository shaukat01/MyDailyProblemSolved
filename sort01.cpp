#include<bits/stdc++.h>
using namespace std;


int main(){
vector<int>arr{1,1,0,1,0,1,1,1};
int start=0;
int i=0;
int end=arr.size()-1;

while(start<=end){
    if(arr[i]==0){
        swap(arr[start],arr[i]);
        i++;
        start++;
    }
    else{
        swap(arr[end],arr[i]);
        end--;
    }
}


for(auto x: arr){
    cout<<x<<" ";
}
    return 0;


}



