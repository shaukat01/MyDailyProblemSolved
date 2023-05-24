// question 3
#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;
    int area;
    int peri;

    rectangle &setDimensions(const int &l, const int &b);
    int computeArea();
    int computePerimeter();
    rectangle();
    rectangle(int l, int b = 2);
};
int rectangle::computeArea()
{
    return (length * breadth);
    // area = length * breadth;
    // return area;
}
int rectangle::computePerimeter()
{
    return 2 * (length + breadth);
    // perimetre = 2 * (length + breadth);
    // return perimetre;
}
rectangle::rectangle()
{
    length = 0;
    breadth = 0;
    area = 0;
    peri = 0;
}
rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
rectangle &rectangle::setDimensions(const int &l, const int &b)
{
    length = l;
    breadth = b;
    return *this;
}

int main()
{
    rectangle *r1 = new rectangle();
    rectangle *r2 = new rectangle(15);
    rectangle *r3 = new rectangle(15, 20);
    rectangle &r4 = r1->setDimensions(15, 10);
    cout << "r1:area" << r1->computeArea() << endl
         << "r1:perimetre" << r1->computePerimeter() << endl;
    cout << "r2:area" << r2->computeArea() << endl
         << "r2:perimetre" << r2->computePerimeter() << endl;
    cout << "r3:area" << r3->computeArea() << endl
         << "r3:perimetre" << r3->computePerimeter() << endl;
    cout << "r4:area" << r4.computeArea() << endl
         << "r4:perimetre" << r4.computePerimeter() << endl;
    delete r1, r2, r3;
    return 0;
}
