#include<bits/stdc++.h>
using namespace std;



int main(){

int n;
cin>>n;
//full pyramid
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
}



//inverted pyramid
for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }    
    cout<<endl;
    }

    return 0;
}




