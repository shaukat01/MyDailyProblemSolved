#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
      /*
      int a=10;
    int *p;     // declaration 
    p=&a;
     cout<<a<<endl;
     printf("%d %d %d", *p,&a,p);
             return 0;
              */

     /*
        int A[5]={2,4,5,6,8};
        int *p;
        p=A;
        for(int i=0; i<5; i++)
        cout<<p[i]<<endl;

        // printf("%d",) 
        */

  
    /*
    // to print in heap
       int *p;
        p=new int[5];   // only in c++
    p=(int *)malloc(5*sizeof(int));    // only in C language
       p[0]=10; p[1]=15; p[2]=18; p[3]=24; p[4]=31;
          for(int i=0; i<5; i++)
              cout<<p[i]<<endl;

          delete[] p;   //in c++    used delete from heap
          free(p)         // in c   used delete from heap

                */

              
              // size of pointer is independent of its data type
           int *p1;
           char  *p2;
           float *p3;
           double *p4;
           struct rectangle *p5;
           cout<<sizeof(p1)<<endl;
           cout<<sizeof(p2)<<endl;
           cout<<sizeof(p3)<<endl;
           cout<<sizeof(p4)<<endl;

                  return 0;

}
