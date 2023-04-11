#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin>>n;

//straigh half pyramid
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
//   }

//numeric half inverted pyramid
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
}
  
    return 0;
}