#include<bits/stdc++.h>
using namespace std;


void solve(int arr[]) {
        cout <<"Size inside solve function " << sizeof(arr) << endl;//it will givr either 4 or 8
        cout <<"arr: " << arr << endl;  //it gives the address of arr which is coming from main function
        cout << "&arr: " << & arr << endl; //it gives the address of pointer which is inside  solve fuction

        arr[0] = 50;
}

void update(int *p) {
        cout << "Address stored inside p is: " << p << endl;
        cout << "Address of p  is:" << &p << endl;
        *p = *p + 10;
}

int main(){

    int arr[10] = {1,2,3,4};
    //   cout << "Size inside main function. " << sizeof(arr) << endl;
    //   cout << arr << endl;
    //   cout << &arr << endl;


        //printing array inside main
        // for(int i=0; i<10; i++) {
        //         cout << arr[i] << " ";
        // }cout << endl;
        // cout << endl << endl << "Now calling solve function" << endl;

        //  solve(arr);

        // cout << "Wapas main function me aagye h " << endl;

        // for(int i=0; i<10; i++) {
        //         cout << arr[i] << " ";
        // }cout << endl;


        int a = 5;
        cout << "Address of a is: " << &a << endl;
        int* ptr = &a;
        cout << "address stored in ptr is: " << ptr << endl;
        cout << "Address of ptr is: " << &ptr << endl;
        update(ptr);
        cout<<"value of a is: " << a << endl;



    return 0;
}