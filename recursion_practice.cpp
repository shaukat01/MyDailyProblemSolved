#include<stdio.h>
#include<iostream>
using namespace std;

     /*
      // Examples 1
  void fun(int n)
  {
      if(n>0)
      {
          printf("%d\n", n);
          fun(n-1);
      }
  }

        int main()
{
   int x = 3;
   fun(x);
              */


             // Examples 1
  void fun(int n)
  {
      if(n>0)
      {
          fun(n-1);
          printf("%d\n", n);
      }
  }

        int main()
{
   int x = 3;
   fun(x);    



    return 0;
}