#include<iostream>
using namespace std;

int main(){
// int *ptr;  //bad practice

//below three all are same
int *ptr=0;
int *ptr=NULL; 
int *ptr=nullptr;
cout<<*ptr<<endl;

int arr[4]={12,14,15,17};
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;
cout<<&arr[1]<<endl;

// int *p=&arr;  //that is wrong
// int *ptr=arr ; //this is correct

cout<<*arr<<endl;
cout<<*arr+1<<endl;
cout<<*(arr)+1<<endl;
cout<<*(arr+1)<<endl;
// cout(*arr)+1<<endl;  //wrong

int i=0;
cout<<arr[i]<<endl;
cout<<i[arr]<<endl;
cout<<*(arr+i)<<endl;

// arr=arr+2;  //wrong

//below is correct
// int *p=arr;
// p=p+2;


int arr[10]={2,1,3,5,9};
cout<<sizeof(arr)<<endl;

// int *p=arr;
// cout<<sizeof(p)<<endl;  //may be 4 or 8 due to archietcture dependent
// cout<<sizeof(*p)<<endl; // (may pe 4 or 8 dur to integer size)*p me ju present hai uska address deega


return 0;

}






