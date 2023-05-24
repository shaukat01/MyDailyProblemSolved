#include <bits/stdc++.h>
#include <vector>
using namespace std;

void lcs(string x, string y)
{
    int m = x.length();
    int n = y.length();
    int l[m+1][n+1];
    for (int i = 0; i <= m; i++)
    {
        l[i][0] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
        l[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                l[i][j] = 1 + l[i - 1][j - 1];
            }
            else
            {
                l[i][j] = max(l[i - 1][j], l[i][j - 1]);
            }
        }
    }
    cout << "lcs matrix is: " << endl;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << l[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Last element present is: " << l[m][n]<< endl;
    int i = m;
    int j = n;
    int index = l[m][n];
    string lc;
    while (i != 0 && j != 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            lc.push_back(x[i - 1]);
            i--;
            j--;
            index--;
        }
        else if (l[i - 1][j] > l[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(lc.begin(), lc.end());
    cout << "The longest subsequence is: " << lc << endl;
}

int main()
{
    string x, y;
    cout << "Enter the string: " << endl;
    cin >> x >> y;
    lcs(x, y);

    return 0;
}