#include<iostream>
using namespace std;

int main(){
    int arr[10]={23,122,41,67};

   cout<<arr<<endl;
   cout<<arr[0]<<endl;
   cout<<&arr[0]<<endl; 
   cout<<*arr<<endl;
   cout<<*arr+1<<endl;
   cout<<*(arr+1)<<endl;
   cout<<*(arr)+1<<endl;
   cout<<arr[2]<<endl;
   cout<<*(arr+2)<<endl;
   cout<<endl<<endl;

      int i=1;
      cout<<i[arr]<<endl;
      
  cout<<endl<<endl;
  int temp[10]={1,2};
  cout<<sizeof(temp)<<endl;
  cout<<sizeof(*temp)<<endl;
  cout<<sizeof(&temp)<<endl;
  cout<<"Now"<<endl;
  int *ptr=&temp[0];
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(*ptr)<<endl;
  cout<<sizeof(&ptr)<<endl;

   cout<<endl<<endl;
   int arr1[10]
   //arr=arr+1;  //it is wrong practice gives error
    //do this

     int *p=&arr[0];
     cout<<p<<endl;
     p=p+1;
     cout<<p<<endl;
     
    return 0;
}