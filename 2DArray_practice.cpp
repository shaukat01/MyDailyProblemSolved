#include<stdio.h>
int main()
{
      
 /*
        //  method 1
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};    // stack

        int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
              printf("%d ", A[i][j]);
               printf("\n");    // this printf helps in to print first complete one row then in 2nd row
        }
              */


         /*
       // Method 3
   int *B[3];  // stack
//     B[0]={int *}malloc(4*sizeof(int));  //heap
//     B[1]={int *}malloc(4*sizeof(int));   //heap
//     B[2]={int *}malloc(4*sizeof(int));      //heap

              */


 /*
  // method 3
   int **C;  //heap
      C=(int **)malloc(3*sizeof(int *));    //heap
      C[0]=(int *)malloc(4*sizeof(int));      //heap
      C[1]=(int *)malloc(4*sizeof(int));      //heap
      C[2]=(int *)malloc(4*sizeof(int));      //heap
      
            int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
              printf("%d ", A[i][j]);
               printf("\n");    // this printf helps in to print first complete one row then in 2nd row
        }
      */
    return 0;

}