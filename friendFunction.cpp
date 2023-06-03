#include<iostream>
using namespace std;

  class Test
  {
      private: int a;
      protected:int b;
      public:int c;
      friend void fun();

  };
  void fun()
  {
      Test t;   // this is object
      t.a=10;
      t.b=15;
      t.c=9;
  }
int main()
{
  



    return 0;
}