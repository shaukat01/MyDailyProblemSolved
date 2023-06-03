#include <stdio.h>
#include<stdlib.h>
//   #include<climits>
#include<limits.h>
      

 int findMax(int A[],int n){
    int max=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(A[i]>max)
        max=A[i];
    }
    return max;
}

  void countSort(int A[], int n){
      int i,j,max;
      max=findMax(A,n);
  int *c=(int *)malloc(sizeof(int)*(max+1));
  for(i=0;i<max+1;i++){
      c[i]=0;
  }
  for(i=0;i<n;i++){
      c[A[i]]++;
  }             
  i=0;j=0;
  while(j<max+1){
      if(c[j]>0){
          A[i++]=j;
          c[j]--;
      }
      else
      j++;
  }    
    }

  
int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};   
    int n = 10;
    int i;
   countSort(A,n);
    for (i = 0; i < 10; i++)
        printf("%d", A[i]);
    printf("\n");
    return 0;


//     rough
//         int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int key;
//     scanf("%d",&key);
//     int ans = interpolation_search(arr,0,n-1,key);
//     printf("%d",ans);
//     
}