#include <iostream>
#include <math.h>
using namespace std;

class shape
{
protected:
    float area;
    float perimetre;

public:
    shape(){};
    virtual void initialize() = 0;
    virtual float computeArea() = 0;
    virtual float computePerimetre() = 0;
    virtual ~shape(){};
};

class triangle : public shape
{
protected:
    int height;
    int base;

public:
    void initialize()
    {
        cout << "enter the height of the triangle :" << endl;
        cin >> height;
        cout << "Enter the base of the triangle :" << endl;
        cin >> base;
    }
    float computeArea()
    {
        area = (height * base) / 2;
        return area;
    }
    float computePerimetre()
    {
        perimetre = height + base + sqrt(height * height + base * base);
        return perimetre;
    }
};

class rectangle : public shape
{
protected:
    int l;
    int b;

public:
    void initialize()
    {
        cout << "enter the length of the rectangle :" << endl;
        cin >> l;
        cout << "Enter the breadth of the rectangle :" << endl;
        cin >> b;
    }
    float computeArea()
    {
        area = l * b;
        return area;
    }
    float computePerimetre()
    {
        perimetre = 2 * (l + b);
        return perimetre;
    }
};

int main()
{
    shape *c1;
    triangle c2;
    rectangle c3;
    c1 = &c2;
    c1->initialize();
    cout << "The area of triangle is :" << c1->computeArea() << endl;
    cout << "The perimtre of triangle is :" << c1->computePerimetre() << endl;
    c1 = &c3;
    c1->initialize();
    cout << "The area of rectangle is :" << c1->computeArea() << endl;
    cout << "The perimtre of rectangle is :" << c1->computePerimetre() << endl;

    return 0;
}
