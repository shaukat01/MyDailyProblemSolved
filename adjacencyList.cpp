#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
// vector<int> graph[N];            // without weights
vector<pair<int, int>> graph[N]; // storing with weights also
int main()
{
    int n, m, w;
    // cout << "Enter the value of vertices(n) and edges(m): " << endl;
    // cin >> n >> m;
    // cout << "Enter the vertics which is to connected: " << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     int v1, v2;
    //     cin >> v1 >> v2;
    //     graph[v1].push_back(v1);
    //     graph[v2].push_back(v1);
    // }
    // O(N+M)
    // with weights
    cout << "Enter the value of vertices(n) and edges(m): " << endl;
    cin >> n >> m;
    cout << "Enter the vertics which is to connecteand and their weights corrosponding: " << endl;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v1, w});
        graph[v2].push_back({v2, w});
    }
    return 0;
}
