#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph[N][N];
int main()
{
    int n, m, w;
    cout << "Enter the value of vertices(n) and edges(m): " << endl;
    cin >> n >> m;
    cout << "Enter the vertics which is to connected: " << endl;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    // O(N^2) space complexity
    // N=1e3

    // for weighted graph
    cout << "Enter the value of vertices(n) and edges(m): " << endl;
    cin >> n >> m;
    cout << "Enter the vertics which is to connected and thier weights corrosponding: " << endl;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2 >> w;
        graph[v1][v2] = w;
        graph[v2][v1] = w;
    }
    return 0;
}