#include<bits/stdc++.h>
using namespace std;


int main(){

//  int arr[4] = {12,44,66,18};

    //     cout << arr << endl;
    //     cout << &arr << endl;
    //     cout << &arr[0] << endl;
    //  //all above three is of same answer
    //     cout << arr[0] << endl;


        // int* p = arr;
        // cout << p << endl;
        // cout << &p << endl;
        // cout<<*p<<endl;
        // cout<<*arr<<endl;


        //both are same
        // cout << *arr + 1 << endl;
        // cout << *(arr) + 1 << endl;


        // cout << *(arr + 1) << endl;
        // cout << arr[1] << endl;
        // cout << *(arr + 2) << endl;
        // cout << arr[2] << endl;
        // cout << *(arr + 3) << endl;
        // cout << arr[3] << endl;


  
        //all are same answer
        // int i = 0;
        // cout << arr[i] << endl;
        // cout << i[arr] << endl;
        // cout << *(arr + i) << endl;
        // cout << *(i + arr) << endl;
        

       //we cannot do this type oof things
        // arr = arr + 2;
        // arr=arr+1;

 
    //    but through this way we can do of just above statement
    //    int* p = arr;
    //    p = p + 2;
    //    cout<<p<<endl;
    //    cout<<*p<<endl;


            int arr[10]={55,4,5,6,8}; //size depend on inside big bracket not on currly bracket
            // cout << sizeof(arr) << endl;

            int* p = arr;
            // cout << sizeof(p) << endl;//either 4 or 8  ans will come because size of pointer is always fixed

            cout << sizeof(*p+1) << endl;
             cout << sizeof*(p+1) << endl;
 
    return 0;
}