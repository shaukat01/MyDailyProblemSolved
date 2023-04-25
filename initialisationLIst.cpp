#include <bits/stdc++.h>
using namespace std;

class Point {
    private:
        int x;
        int y;
    
    public:
        Point(int i, int j) : x(i), y(j) { //we can initialisation  in this way also

        }
        void getX() {
            cout << x << endl;
        }
        void getY() {
            cout << y << endl;
        }
};

int main() {
    Point pn(10, 15);
    pn.getX();
    pn.getY();
    return 0;
}
