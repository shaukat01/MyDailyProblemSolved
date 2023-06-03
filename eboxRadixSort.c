// #include <stdio.h>
// #include <malloc.h>

// void countsort(int arr[], int n, int expp)
// {
//     int ind[10] = {0}; // dusra array  
//     for (int i = 0; i < n; i++)
//         ind[(arr[i] / expp) % 10]++;
//     for (int i = 1; i <= 9; i++)
//         ind[i] = ind[i] + ind[i - 1];
//     int newarray[n]; // last array create   
//     for (int i = n - 1; i >= 0; i--)
//     {
//         ind[(arr[i] / expp) % 10]--;
//         newarray[ind[(arr[i] / expp) % 10]] = arr[i];
//     }
//     for (int i = 0; i < n; i++)     
//     {
//         arr[i] = newarray[i];
//     }
// }

// void radixsort(int arr[], int n)
// {
//     int maxi = -999;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxi)
//             maxi = arr[i];
//     }
//     int expp = 1;
//     while (expp < maxi)
//     {
//         countsort(arr, n, expp);
//         expp = expp * 10;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     radixsort(arr, n);
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>


void sort(int arr[],int n,int expp){
    int ind[10]={0};
    for(int i=0;i<n;i++){
        ind[(arr[i]/expp)%10]++;
    }
    for(int i=1;i<=9;i++){
        ind[i]=ind[i]+ind[i-1];
    }
    int newArray[n];
    for(int i=n-1;i>=0;i--){
        ind[(arr[i]/expp)%10]--;
        newArray[ind[(arr[i]/expp)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=newArray[i];
    }
}

void radixSort(int arr[],int n){
    int maxi=-99999;
    int expp=1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    while(expp<maxi){
        sort(arr,n,expp);
        expp=expp*10;
    }
}

int main(){
    printf("Enter the size of the array:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    radixSort(arr,n);
    for(int i=0;i<n;i++){
        printf("Array after sorting %d:\n",arr[i]);
    }
    return 0;
    
}