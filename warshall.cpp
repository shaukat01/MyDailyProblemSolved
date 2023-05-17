// taking all starting with 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void warshall(vector<vector<int>> &arr, int n)
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = arr[i][j] || arr[i][k] && arr[k][j];
            }
        }
    }
    cout << "Transitive closure is: " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of vertices: " << endl;
    cin>>n;
    vector<vector<int>> arr(n+1, vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    warshall(arr,n);
    return 0;
}