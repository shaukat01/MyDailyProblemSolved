#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // data members
        int age;
        int weight;

        // parameterized constructor
        Animal(int age, int weight) {
            this -> age = age;
            this -> weight = weight;
            cout << "\nParameterized constructor called.....";
        }

        // copy constructor
        // we've sent the object by reference as parameter to avoid infinite loop
        Animal(Animal &obj) {
            this -> age = obj.age;
            this -> weight = obj.weight;
            cout << "\nCopy constructor called.....";
        }
};

int main() {
    Animal ab(10, 20);
    //below both condition we are passing object as an parametre
    Animal ac = ab; // 1st way to copy 1 object to another object
    Animal ad(ab); // 2nd way to copy 1 object to another object
    return 0;
}