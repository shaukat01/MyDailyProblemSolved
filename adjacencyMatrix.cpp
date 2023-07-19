#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    int e;
    cout << "Enter the number of edges: " << endl;
    cin >> e;

    vector<vector<int>> adj(n, vector<int>(n, 0));

   cout<<"put vertices of graph: "<<endl;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        // mark 1
        adj[u][v] = 1;
    }

    // printing
    cout<<"The adjacency Matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

