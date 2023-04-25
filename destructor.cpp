#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        ~ Animal() {
            cout << "\nDestructor called.....";
        }
        Animal() {
            cout << "\nConstructor called.....";
        }
};

int main() {
    Animal *an = new Animal();//as we write this line only constructor will called
    delete an;//as we write this only destructor will called
    return 0;
}