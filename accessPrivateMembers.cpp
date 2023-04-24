#include <bits/stdc++.h>
using namespace std;

class Animal {
    private:
        int weight;
    public:
    //through getter and setter we can fetch private members
        void setWeight(int w) { 
            weight = w;
        }
        void getWeight() {
            cout << weight << endl;
        }
};

int main() {
    Animal an;
    an.setWeight(154);
    an.getWeight();
    return 0;
}