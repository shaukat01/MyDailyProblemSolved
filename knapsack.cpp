#include <bits/stdc++.h>
using namespace std;

void knapsack(int n, int c, int w[], int p[])
{
    // int k[n + 1][c + 1];
    vector<vector<int> > k(n+1,vector<int>(c+1));
    for (int i = 0; i <= n; i++)
    {
        k[i][0] = 0;
    }
    for (int j = 0; j <= c; j++)
    {
        k[0][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j < w[i])
            {
                k[i][j] = k[i - 1][j];
            }
            else if(j>= w[i])
            {
                k[i][j] = max(k[i - 1][j],p[i] + k[i - 1][j - w[i]]);
            }
        }
    }
    cout << "The knapsack matrix is: " << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            cout << k[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Maximum profit is: " << k[n][c] << endl;
}
int main()
{
    int n, c;
    cout << "Enter the number of items: " << endl;
    cin >> n;
    cout << "Enter the capacity of knapsack: " << endl;
    cin >> c;
    int w[n];
    int p[n];
    cout << "Enter the individual weights of knapsack: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cout << "Enter the inidividual profits of knapsack: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    knapsack(n, c, w, p);
    return 0;
}