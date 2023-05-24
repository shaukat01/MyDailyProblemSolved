#include <iostream>
using namespace std;
void binomial(int n, int r)
{
    int b[100][100];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            if (j == 0 || i == j)
            {
                b[i][j] = 1;
            }
            else
            {
                b[i][j] = b[i - 1][j] + b[i - 1][j - 1];
            }
        }
    }
    cout << "Binomial Matrix is: " << b[n][r] << endl;
    cout << "Binomial Metrix is: " << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <=r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r: " << endl;
    cin >> n >> r;
    binomial(n, r);

    return 0;
}