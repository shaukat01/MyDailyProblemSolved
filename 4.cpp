#include <iostream>
using namespace std;

class complex
{
private:
    int r, i;

public:
    void read()
    {
        cout << "Enter the value of real and imaginary part: " << endl;
        cin >> r >> i;
    }
    complex Add(int a, complex s)
    {
        complex t;
        t.r = a + s.r;
        t.i = s.i;
        return t;
    }
    complex Add(complex &s1, complex &s2)
    {
        complex t;
        t.r = s1.r + s2.r;
        t.i = s1.i + s2.i;
        return t;
    }
    void print()
    {
        cout << r << "+i" << i << endl;
    }
};

int main()
{
    complex s1, s2;
    s1.read();
    s2.read();
     
    complex ans;
    ans = ans.Add(3, s1);
    ans.print();
    ans = ans.Add(s1, s2);
    ans.print();
    return 0;
}