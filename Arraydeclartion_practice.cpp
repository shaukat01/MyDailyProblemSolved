#include<stdio.h>

  int main()
  {
  
     /*
    // way of declaration
      int A[5];
      int B[5] = {1,2,3,4,5};
      int C[5] = {1,2};
      int D[5] = {0};
      int E[] = {1,2,3,4,5};
          */

         int A[5];
        //  or
        //  int A[5] = {2,4,5,6,7};
         int i;
         for(i=0; i<5; i++)
         printf("%u\n", &A[i]);
         return 0;
  }