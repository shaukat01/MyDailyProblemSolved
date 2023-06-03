#include<stdio.h>
#include<iostream>
using namespace std;
  

      /*
     // example without using static and global variable
   int fun(int n)
   {
       if(n>0)
       {
           return fun(n-1) + n;

       }
       return 0;
   }
int main()
{
        int r;
        r = fun(5);
        printf("%d", r);
            */

    /*
        // static variable
   int fun(int n)
   {
            static int x=0;
       if(n>0)
       {
             x++ ;
           return fun(n-1) + x;

       }
       return 0;
   }
int main()
{
        int r;
        r = fun(5);
        printf("%d", r);
                */ 

       

       /*
      // global variable variable
     int x=0;
            int fun(int n)
   {
            
       if(n>0)
       {
             x++ ;
           return fun(n-1) + x;

       }
       return 0;
   }
int main()
{
        int r;
        r = fun(5);
        printf("%d", r);     
               */


    //   call two times 
                   int x=0;
            int fun(int n)
   {
            
       if(n>0)
       {
             x++ ;
           return fun(n-1) + x;

       }
       return 0;
   }
int main()
{
        int r;


        r = fun(5);
        printf("%d", r);        


           r = fun(5);
        printf("%d", r);             




    return 0;
}
