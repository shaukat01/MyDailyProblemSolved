#include <bits/stdc++.h>
using namespace std;

class Car {
    int price; // 4 bytes
    int doors; // 4 bytes
    bool ignition; // 1 byte + 3 bytes of padding
};

class Animal {
    double c; // 8 bytes
    double a; // 8 bytes
    char b; // 1 byte + 7 bytes of padding
};

int main() {
    cout << "\nSize of car class is " << sizeof(Car) << " bytes" << endl;
    cout << "\nSize of animal class is " << sizeof(Animal) << " bytes" << endl;
    return 0;

}