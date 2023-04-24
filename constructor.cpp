#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // data members
        int age;

        // member functions
        void eat() {
            cout << "Eating" << endl;
        }

        // constructor
        Animal() {
            cout << "\nConstructor called....." << endl;
        }
};

int main() {
    Animal *an = new Animal;
    an -> age = 10;
    cout << "Age of animal is: " << an -> age << endl;
    an -> eat();
    return 0;
}