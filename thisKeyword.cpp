#include <bits/stdc++.h>
using namespace std;

class Animal {
    // data members
    private:
        int weight;
    public: 
        int age;
        string name;

        // member functions
        void eat() {
            cout << "\nEating" << endl;
        }
        void sleep() {
            cout << "\nSleeping" << endl;
        }
        // 'this' is a pointer to current object
        // here current object is an
        void setWeight(int weight) {
            this -> weight = weight;//after 2nd weight is of parametre weight and with this weight is of an object
        }
        void getWeight() {
            cout << "\nWeight of animal is: " << weight << endl;
        }
};

int main() {
    Animal *an = new Animal;
    an -> age = 10;;
    an -> name = "Cat";
    cout << "\nAge of animal is: " << an -> age << endl;
    cout << "\nName of animal is: " << an -> name << endl;
    an -> eat();
    an -> sleep();
    an -> setWeight(20);
    an -> getWeight();
    return 0;
}