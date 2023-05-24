#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DB;
class DM
{
private:
    int met;
    int cent;
public:
    void input()
    {
        int x;
        cout << "Enter distances metres and centimetres :" << endl;
        cin >> met >> cent;
    }
    
    void display()
    {
        cout << "The distance in metre is :"
             << " " << met << " "
             << "metres" << endl;
        cout << "The distances in centimetres is :"
             << " " << cent << " "
             << "Centimetres" << endl;
    }
    friend void add(DB d1, DM d2);
    friend void add2(DB d1, DM d2);
};


class DB
{
private:
    int feet;
    int inche;
public:
    void input()
    {
        cout << "Enter distances feet and inches :" << endl;
        cin >> feet >> inche;
    }
    void display()
    {
        cout << "The distance in feet is :"
             << " " << feet << " "
             << "feets" << endl;
        cout << "The distances in inches is :"
             << " " << inche << " "
             << "inches" << endl;
    }
    friend void add(DB d1, DM d2);
    friend void add2(DB d1, DM d2);
};


void add(DB d1, DM d2)
{
    DM d;
    int c = (d2.met * 100 + d2.cent + d1.feet * 30.8 + d1.inche * 2.54);
    if (c > 100)
    {
        d.met = c / 100;
        d.cent = c % 100;
    }
    else
    {
        d.met = 0;
        d.cent = c;
    }
    d.display();
}


void add2(DB d1, DM d2)
{
    DB d3;
    int in = d1.inche + d1.feet * 12 + d2.cent * .40 + d2.met * 40;
    if (in > 12)
    {
        d3.feet = in / 12;
        d3.inche = in % 12;
    }
    else
    {
        d3.feet = 0;
        d3.inche = in;
    }
    d3.display();
}


int main()
{
    DB d1;
    DM d2;

    d1.input();
    d2.input();

    d1.display();
    d2.display();

    add(d1, d2);
}
