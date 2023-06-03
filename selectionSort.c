#include<stdio.h>


void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j,k;
        for( j=k=i;j<n;j++){
            if(arr[j]<arr[k])
            k=j;     
        }
        swap(&arr[i],&arr[k]);
    }
}


int main(){
    int n=10;
    int A[]={3,9,9,10,5,12,4,11,2,32};
 
      selectionSort(A,n);

    // for display
    for(int i=0;i<10;i++){
        printf("%d",A[i]);
        printf("\n");
    }
    return 0;
}
