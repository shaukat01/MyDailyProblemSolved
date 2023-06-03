#include <iostream>
using namespace std;

int main()
{
    // different way to write hello world
    cout << "hello world" << endl;
    cout << "hello world";
    cout << "\n";
    cout << "hello world" << '\n';
    cout << "hello world\n";
    cout << "hello world" << endl;

    int a = 123;
    cout << a << endl;
    cout<<!a<<endl;
    int z=0;
    cout<<!z<<endl;
    int w=-1;
    cout<<w<<endl;
    float f = 1.23;
    cout << f << endl;
    double d = 3.333;
    cout << d << endl;
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(ch) << endl;

    int b = -1;
    cout << b << endl;
    unsigned int c = 452;
    cout << c << endl;
    unsigned int e = -452; // whenever we use undigned always remember use positive number
    cout << e << endl;
    int g = 2 / 5;
    cout << g << endl;
    int h = 2.0 / 5;
    cout << h << endl;
    float i=2/5;
    cout<<i<<endl;
    float j=2.0/5;
    cout<<j<<endl;
   bool k=true;
   cout<<k<<endl;
   bool l= a==b;
   cout<<l<<endl;
   cout<<"yaha se cin.get()"<<endl;
       int t=cin.get();
       cout<<t<<endl;
    return 0;
}




