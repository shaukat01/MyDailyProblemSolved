#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // state or properties
        int age;
        string name;

        // behaviour or functions
        void eat() {
            cout << "\nEating";
        }
        void sleep() {
            cout << "\nSleeping";
        }
};

int main() {
    // object creation
    // static memory
    Animal obj1; // object of class Animal --> name of object is 'obj1' 
    cout << "\nAge of animal is " << obj1.age << endl;
    cout << "\nName of animal is " << obj1.name << endl;
    obj1.eat();
    obj1.sleep();
    return 0;
}