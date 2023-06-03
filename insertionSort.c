#include<stdio.h>

    void insertionSort(int arr[],int n){
  int i,j,x;
  for(i=1;i<n;i++){
     j=i-1;
     x=arr[i];
  
  while(j>-1 && arr[j]>x){
      arr[j+1]=arr[j];
      j--;
  }
  arr[j+1]=x;
    }
    }
int main(){
    int n=10;
    int A[]={3,9,9,10,5,12,4,11,2,32};
 
 insertionSort(A,n);

    // for display
    for(int i=0;i<10;i++){
        printf("%d",A[i]);
        printf("\n");
    }
    return 0;
}
