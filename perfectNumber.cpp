#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
        cout << "perfect number";
    else
        cout << "not a perfect number";

    return 0;
}