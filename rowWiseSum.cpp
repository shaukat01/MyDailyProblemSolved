#include<bits/stdc++.h>
using namespace std;

void print(int arr[3][3],int row,int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            cout<<sum<<" ";
        }
        cout<<endl<<endl<<endl;
    }
}



int main(){


  int arr[3][3];
  //taking input
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
  }
  print(arr,3,3);

    return 0;
}