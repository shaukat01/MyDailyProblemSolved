#include <bits/stdc++.h>
using namespace std;


class Animal {
    public:
        int a = 10;

        void eat() {
            cout << "\nEating" << endl;
        }

        void sleep() const {
            cout << "\nSleeping" << endl;
            cout << a << endl;
            a = 10; // not possible, because we cannot change the value of any class data member in const member function
            cout << a << endl;
            eat(); // not possible, because we cannot call non const function in const function
        }
};


int main() {
    Animal an;
    an.sleep();
    return 0;
}


