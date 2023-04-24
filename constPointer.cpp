#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int *const ptr = &a;//here we fixed that ptr only point to a only we cannot change further but we can change the value of *ptr
    cout << a << endl;
    cout << *ptr << endl;
    *ptr = 20; // this is possible
    ptr = &b; // this is not possible due to const
    cout << a << endl;
    cout << *ptr << endl;
    return 0;
}