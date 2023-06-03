#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int array[3] = {2, 5, 6};
    int a[10] = {0};  //all initilise with zero
    int b[10] = {1}; // wrong practice because it only initilise 1 in one block only and reminig with zero
     int bSize=sizeof(b)/sizeof(int);  //to find the array size
     cout<<bSize<<endl;
     char cc[5]={'c','d','e','w','q'};
     for(int i=0;i<5;i++){
         cout<<cc[i]<<endl;
     }
    return 0;
}