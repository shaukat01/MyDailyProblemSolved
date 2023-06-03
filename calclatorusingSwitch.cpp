#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    char c;
    cout << "Enter the value of character c: " << endl;
    cin >> c;
    switch (c)
    {
    case '+':
        cout << "Addition is: " << (a + b) << endl;
        break;
    case '-':
        cout << "Subtraction is: " << (a - b) << endl;
        break;
    case '*':
        cout << "Multiplication is: " << (a * b) << endl;
        break;
    case '/':
        cout << "Division is: " << endl;
        break;
    default:
        cout << "Calculator is beyond of our control: " << endl;
        break;
    }
    return 0;
}