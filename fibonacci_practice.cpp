#include<stdio.h>
#include<iostream>
using namespace std;

    
          // by recursion method

          int fib(int n)
      {
          if (n<=1)
          return n;
          else{
              return fib(n-2) + fib(n-2);
          }
          
      }
int main()
{
  
         printf("%d", fib(10));
        return 0;

    return 0;

}