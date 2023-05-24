#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex)
{
    cout << vertex << endl; /*
   take action on vertex after entering the vertex
    */
    // if (vis[vertex])
    //     return;
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "ex" << endl;
        cout << "parent" << vertex << " "
             << "Child" << child << endl;
        if (vis[child])
            continue;
        /*
         take action on child before entering the child node
        */
        dfs(child);
        /*
        take action on child after exiting child node
        */
    }
    /*
  take action on vertex before exiting the vertex
    */
}
int main()
{
    int n, m;
    cout << "Enter the number of vertices and edges of graph: " << endl;
    cin >> n >> m;
    cout << "Enter the vertices between their edges: " << endl;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(m);
    return 0;
}