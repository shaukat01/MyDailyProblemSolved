#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
 
void bubbleSort(int *arr,int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
   if(flag==0)
   break;
    }
}

int main(){
    int n=10;
    int A[]={3,9,9,10,5,12,4,11,2,32};
    bubbleSort(A,10);  // don't need to attach & before A because array already pass addres  without &


    // for display
    for(int i=0;i<10;i++){
        printf("%d",A[i]);
        printf("\n");
    }
    return 0;
}