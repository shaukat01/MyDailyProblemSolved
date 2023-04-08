#include<bits/stdc++.h>
using namespace std;


int main(){
 int arr[3][5]={
    {3,2,4},
    {6,5,4},
    {8,7,6}
 };
// row wise
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
cout<<endl<<endl;

//column wise
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
 }
    return 0;
}