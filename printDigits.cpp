#include<bits/stdc++.h>
using namespace std;

void digit(int n){
    if(n==0){
        return;
    }

    digit(n/10);
    
    int di=n%10;
    cout<<di<<endl;
}

int main(){
   int n=51528;
   digit(n);
    
    return 0;
}


