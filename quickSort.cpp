#include <iostream>
#include <bits/stdc++.h>
using namespace std;

   int c =0;
// decrease and concequer
  int partition(int arr[],int low,int high){
      int i=low;
      int j=high+1;
      int pivot=arr[low];
      do{ 
      do{i++;c++;}while(arr[i]<=pivot);
      do{j--;c++;}while(arr[j]>pivot);
     if(i<j)swap(arr[i],arr[j]);
     }while(i<j);
   swap(arr[low],arr[j]);
   return j;
   }
   void quickSort(int arr[],int low,int high){
   int x;
   if(low<high){
       c++;
       x=partition(arr,low,high);
       quickSort(arr,low,x-1);
       quickSort(arr,x+1,high);
   }
   }

int main()
{
    int n;
    cout << "Enter the size of element :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1;
    quickSort(arr, low, high);
    cout << "Sorted element is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<"count: "<<c<<endl;
    return 0;
}
