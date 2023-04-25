#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // data members
        int age;
        string name;
};


int main() {
    Animal *bn = new Animal;
    // 1st way to access data members using pointer object
    (*bn).age = 5;
    (*bn).name = "Dog";

    // 2nd way to access data members using pointer object
    bn -> age = 10;
    bn -> name = "Cat";
    return 0;
}


