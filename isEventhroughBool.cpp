#include <bits/stdc++.h>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    int x = isEven(num);
    cout << x << endl;
    return 0;
}
