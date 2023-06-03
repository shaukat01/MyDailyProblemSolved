#include<iostream>
using namespace std;


int main(){
   int num=5;
   cout<<"Address of num id: "<<&num<<endl;

   int *p1=&num;
   cout<< num <<endl;
   cout << p1 << endl;
   cout << *p1 << endl;

   double d = 4.3;
   double *p2 = &d;
    cout<< d <<endl;
    cout<< p2 <<endl;
    cout<< *p2 <<endl;

   cout<<"size of integer is; "<<sizeof(num)<<endl;
   cout<<"size of integer is; "<<sizeof(ptr)<<endl;
   cout<<"size of integer is; "<<sizeof(p2)<<endl;

    return 0;
}