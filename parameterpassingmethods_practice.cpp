#include<iostream>
using namespace std;
#include<stdio.h>


 /*
      // call by value
  int add(int a, int b)
  {
      a++;
      cout<<a;
      return 0;
  }
int main()
{
          int num1=10, num2=15,sum;
          sum= add(num1,num2);
          cout<<endl<<num1;
                    */


          /*
            // call by address
         void swap(int *x,int *y)
         {
             int temp;
             temp = *x;
             *x = *y;
             *y=temp;
         }   


         int main()
         {
             int num1=10, num2=15;
             swap(&num1,&num2);
             cout<<"First Number"<<num1<<endl;
             cout<<"second Number"<<num2<<endl;
                           */



                //  call by refernce
                   void swap(int &x,int &y)
         {
             int temp;
             temp = x;
             x = y;
             y=temp;
         }   


         int main()
         {
             int num1=10, num2=15;
             swap(num1,num2);
             cout<<"First Number"<<num1<<endl;
             cout<<"second Number"<<num2<<endl;


    return 0;
}
