// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// int search(int arr[], int l, int h, int key)
// {
//     if (l > h)
//         return -1;

//     int pos = l + ((key - arr[l]) / (arr[h] - arr[l])) * (h - l);
//     if (arr[pos] == key)
//         return pos;
//     else
//     {
//         if (arr[pos] > key)
//         {
//             return search(arr, l, pos - 1, key);
//         }
//         else
//         {
//             return search(arr, pos + 1, h, key);
//         }
//     }
// }

// int main()
// {
//     printf("Enter the number of elements in an array :\n");
//     int n;
//     int key;
//     int i;
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter the elements :\n");
//     for (i = 0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the value to be searched :\n");
//     scanf("%d", &key);
//     int ans = search(arr, 0, n - 1, key);
//     if (ans == -1)
//     {
//         printf("%d is not found in the array\n", key);  //doubt
//     }
//     else
//     {
//         printf("%d is found at position %d\n", key, ans - 1);
//     }
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int interPolation(int arr[],int l,int h,int key){
    if(l>h){
    return -1;
}

int pos=l+((key-arr[l])/arr[h]-arr[l])*(h-l);
 if(arr[pos]==key){
     return pos;
 }
 
 else{
     if(arr[pos]>key){
         interPolation(arr,l,pos-1,key);
     }
     else{
         interPolation(arr,pos+1,h,key);
     }
 }
}
  
  
int main(){
    printf("Enter the number of elements in the array:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the elements:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("Enter the value to be searched:\n");
    int key;
    scanf("%d",&key);
    int ans=interPolation(arr,0,n-1,key);  //doubt
    if(ans==-1){
        printf("%d is not found in the array:\n",key);
    }
    else{
    printf("%d is found at position %d",key,ans-1);
    }
    return 0;
}