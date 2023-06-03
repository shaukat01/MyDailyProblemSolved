#include<iostream>
using namespace std;

  int main(){

  /*
  //number of rows and columns are same
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;


     //creating 2d aray dynamically
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    //taking input in 2d array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

     //printing the 2d array
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
         }

         */


   // number of rows and columns are different  
       int row;
       cout<<"Enter the rows: "<<endl;
       cin>>row;

       int col;
       cout<<"Enter the column: "<<endl;
       cin>>col;

         //creating 2d aray dynamically
          int **arr = new int*[row];
          for(int i=0;i<row;i++){
              arr[i]=new int[col];
    }
        
        //taking input in 2d array
        cout<<"Enter the input"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

        //printing the 2d array
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
         }

       //releasing memory in 2d array
       for(int i=0;i<row;i++){
       delete [] arr[i];
       }

       delete []arr;


    return 0;
}