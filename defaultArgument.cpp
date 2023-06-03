#include<iostream>
using namespace std;

void print(int arr[],int n,int start=0){   // it is int start=0 default argument if we will not pass anything it will take 0 and if we pass anything then it will take that passing value

//also default value is always from right to,if we want to make default then always make from right to left first do right hen proceed

   for(int i=start;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
  int arr[5]={1,2,3,4,5};
  int size=5;

  print(arr,size);
  cout<<endl;
  print(arr,size,2);
   
    return 0;
}