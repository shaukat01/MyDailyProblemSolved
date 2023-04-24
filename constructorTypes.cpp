#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // data members
        int age;
        int weight;

        // default constructor
        Animal() {
            cout << "\nDefault constructor called.....";
        }
        // parameterized constructor with one parametre
        Animal(int age) {
            this -> age = age;
            cout << "\nParameterized constructor called.....";
        }
         // parameterized constructor with two parametre
        Animal(int age, int weight) {
            this -> age = age;
            this -> weight = weight;
            cout << "\nParameterized constructor 2 called.....";
        }
};

int main() {
    Animal *ab = new Animal();
    Animal *ac = new Animal(10);
    Animal *ad = new Animal(10, 20);
    return 0;
}