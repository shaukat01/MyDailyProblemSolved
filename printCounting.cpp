#include<bits/stdc++.h>
using namespace std;


int sameeksha(int n){
    if(n==0){
        return 1;
    }

    //processing
  cout<<n<<endl;
  //recursive relation
  sameeksha(n-1);

}

int main(){
  int n;
  cin>>n;
  int ans=sameeksha(n); //n=5
  cout<<ans<<endl;
  return 0;
}






