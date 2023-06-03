#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n, r, m;
    cin>>n;
m=n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r*r*r;
    }
    if (sum == n)
    {
        cout << "number is armstrong";
    }
    else
    {
        cout << "number is not armstrong";
    }

    return 0;
}