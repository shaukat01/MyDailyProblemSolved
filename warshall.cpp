#include <iostream>
#include <vector>
using namespace std;

void warshall(vector<vector<int>> &arr, int v)
{
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                arr[i][j] = arr[i][j] | arr[i][k] & arr[k][j];
            }
        }
    }
    cout << endl;
    cout << "transitive closure is: " << endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the vertices :" << endl;
    cin >> n;
    cout << "Enter the vetices which including edges: " << endl;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    warshall(arr, n);

    return 0;
}