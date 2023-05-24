#include <bits/stdc++.h>
#define size 5
using namespace std;

class stackk
{
public:
    int arr[size];
    int top;

    stackk()
    {
        top = -1;
    }
    stackk &operator+(int item)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return *this;
        }

        top++;
        arr[top] = item;
        return *this;
    }

    stackk &operator--(int)
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return *this;
        }

        top--;
        return *this;
    }

    friend ostream &operator<<(ostream &os, stackk &s1);
};

ostream &operator<<(ostream &os, stackk &s1)
{
    if (s1.top == -1)
    {
        os << "Stack is empty" << endl;
        return os;
    }
    for (int i = s1.top; i >= 0; i--)
        os << s1.arr[i] << " ";
    os << endl;
    return os;
}

int main()
{
    stackk s1;
    int n;

    while (1)
    {
        cout << "1) PUSH INTO STACK" << endl;
        cout << "2) POP ELEMENT" << endl;
        cout << "3) DISPLAY" << endl;
        cout << "4) EXIT" << endl;
        cout << "ENTER YOUR CHOICE" << endl;
        cin >> n;

        if (n == 1)
        {
            int item;
            cout << "Enter element to push" << endl;
            cin >> item;
            s1 = s1 + item;
        }
        else if (n == 2)
        {
            s1--;
        }
        else if (n == 3)
        {
            cout << s1;
        }
        else
        {
            cout << "Exiting..." << endl;
            break;
        }
    }
    return 0;
}