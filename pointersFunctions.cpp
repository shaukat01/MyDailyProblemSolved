#include<iostream>
using namespace std;


void print(int *p){
    cout<<*p<<endl;
}


void update(int *p){
  p=p+1;
  cout<<"inside "<<p<<endl;
}


int getSum(int arr[],int n){
  cout<<"HI"<<endl;
   cout<<sizeof(arr)<<endl;
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=i[arr];
   }
     return sum; 
}


int main(){

  int value=5;
  int *p = &value;
  cout << "before "<<p<<endl;
  update(p);
  cout<<"After "<<p<<endl;
  print(p);

  cout<<endl<<endl;
  int n=5;
  int arr[5]={1,2,3,4,5};
  cout<<sizeof(arr)<<endl;
  getSum(arr,n);
  cout<<getSum(arr,n)<<endl;
    return 0;
}