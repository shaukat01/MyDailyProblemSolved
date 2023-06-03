#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    // cout << n << endl;
    // or
    cout<< m << endl;
    return 0;
}