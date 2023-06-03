#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}

int main() 
{
    int a = 10, b = 5, c;
c = add(a, b);
cout << c;

return 0;
}