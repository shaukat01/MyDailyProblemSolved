#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<pair<int, int>> g[N]; // vertex+edge  //input ka vector hai
vector<int> dist(N, INT_MAX);    // distance vector to store distance initally we storing dsitance infinity

void dijkstra(int source)
{
    set<pair<int, int>> s; // distance +vertex
    s.insert({0, source}); // initially distance zero and vertex as source
    dist[source] = 0;      // initially source taken as zero
    while (s.size() > 0)
    {
        auto node = *s.begin(); // finding minimumelement from set
        int vertex = node.second;
        s.erase(s.begin());
        for (int i = 0; i < g[vertex].size(); i++)
        {
            int child_v = g[vertex][i].first;
            int wt = g[vertex][i].second;
            if (dist[vertex] + wt < dist[child_v])
            {
                dist[child_v] = dist[vertex] + wt;
                s.insert({dist[child_v], child_v});
            }
        }
    }
}

int main()
{
    int vertex, e;
    cin >> vertex >> e;
    cout << "Enter the vertices between edges and their corrosponding their weights:" << endl;
    for (int i = 0; i < e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        g[v1].push_back({v2, w});
        g[v2].push_back({v1, w});
    }
    int source;
    cin >> source;
    dijkstra(source);
    for (int i = 1; i <= vertex; i++)
    {
        cout << dist[i] << " ";
    }
    return 0;
}