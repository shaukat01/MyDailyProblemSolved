#include<bits/stdc++.h>
using namespace std;


int main(){
 int row;
 int col;

// int *arr=new int[row];//for one D thats all in case in 1 D
//  delete []arr; //deallaocate 1 D array


//from here 2d array will start
 int **arr=new int*[row]; //pahle row daalo
  for(int i=0;i<row;i++){//fir har row ke liye column banwoo
    arr[i]=new int[col];
  }
  //printing 2D Array
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //deallocate 2D aaray
  for(int i=0;i<row;i++){
    delete[]arr[i];
  }
  delete[]arr;

    return 0;
}







