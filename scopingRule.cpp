#include<iostream>
using namespace std;

int x=10;
int main()
{
   int x=12;
   {
  int x=13;
  cout<<x<<endl;
   } 
cout<<x<<endl;
 cout<<::x<<endl;

 return 0;
}