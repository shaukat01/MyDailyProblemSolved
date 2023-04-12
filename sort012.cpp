#include<bits/stdc++.h>
using namespace std;


int main(){

  int zeros,ones,twos;
  zeros=ones=twos=0;
 
  int arr[7]={2,0,1,1,0,2,1};

   for(int i=0;i<7;i++){
   if(arr[i]==0){
    zeros++;
   }

   else if(arr[i]==1){
    ones++;
   }

   else if(arr[i]==2){
    twos++;
   }
   }

      //spread
      int i=0;
      while(zeros--){
     arr[i]=0;
     i++; 
      }

      while(ones--){
       arr[i]=1;
        i++;
      }

      while(twos--){
       arr[i]=2;
         i++;
      }
      
  for(auto x:arr){
    cout<<x<<" ";
  }
    return 0;
}