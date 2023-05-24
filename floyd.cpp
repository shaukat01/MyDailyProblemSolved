#include <iostream>
#include <vector>
using namespace std;

void floyd(vector<vector<int> > &arr, int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Enter the input of adjaceny matric: " << endl;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    floyd(arr, n);
    return 0;
}