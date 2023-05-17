#include <bits/stdc++.h>
using namespace std;


void binomial(int n, int r)
{
    int c=0;
    int arr[n + 1][r + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(n, r); j++)
        {
            if (i == 0 && j == 0)
            { c++;
                arr[i][j] = 0;
            }
            else if (i == j || j == 0)
            {
                c++;
                arr[i][j] = 1;
            }
            else
            {
                c++;
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    cout << "The Binomial Matrix is: " << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(n, r); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The Binomial are: " << endl;
    cout << arr[n][r] << endl;
    cout<<"count is: "<<c;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r: " << endl;
    cin >> n >> r;
    binomial(n, r);

    return 0;
}