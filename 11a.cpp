#include <iostream>
using namespace std;
template <class t>
class calculator
{
private:
  t a1;
  t b1;

public:
  calculator(t a, t b)
  {
    a1 = a;
    b1 = b;
  }
  t add()
  {
    return a1 + b1;
  }
  t subtract()
  {
    return a1 - b1;
  }
  t multiply()
  {
    return a1 * b1;
  }
  t division()
  {
    return a1 / b1;
  }
  void display()
  {
    cout << "The two numbers are :" << a1 << " " << b1 << endl;
    cout << "The addition two numbers are :" << add() << endl;
    cout << "The subtraction of two numbers are :" << subtract() << endl;
    cout << "The multiplication of two numbers are :" << multiply() << endl;
    cout << "The division of two numbers are :" << division() << endl;
  }
};

int main()
{
  calculator<int> cal1(6, 4);
  calculator<float> cal2(4.5, 2.5);
  cout << "Calculator in integer is :" << endl;
  cal1.display();
  cout << "Calculator in float is :" << endl;
  cal2.display();
  return 0;
}