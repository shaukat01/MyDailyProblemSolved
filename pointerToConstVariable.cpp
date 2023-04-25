#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;  
    int b = 200;  
    const int* ptr;
    // ptr = &b;  
    *ptr = 300; // this is not possible becuase we fixed the const as an garbage value 
    cout << "Value of ptr is: " << *ptr;
    return 0;
}
