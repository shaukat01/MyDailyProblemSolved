#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> g[N]; // vertex+edge  //input ka vector hai
vector<int> vis(N, 0);    // visited array to initially zero
vector<int> dist(N, INF); // distance vector to store distance initally we storing dsitance infinity

void dijkstra(int source, int v)
{
    set<pair<int, int>> s; // distance +vertex
    s.insert({0, source}); // initially distance zero and vertex as source
    dist[source] = 0;      // initially source taken as zero
    // initially source to be zero
    while (s.size() > 0)
    {
        auto node = *s.begin(); // finding minimumelement from set
        int v = node.second;
        int distance = node.first;
    s.erase(s.begin());
        if (vis[v])  //bus zero pe andar nahi jaaye ga baaki sab ke liye jaaye ga
            continue;
        vis[v] = 1;
        // for (auto child : g[v])
        // {
        //     int child_v = child.first;
        //     int distance_v = child.second;
        //     if ((dist[v] + distance_v) < dist[child_v]) // new distance + old distance
        //     {
        //         dist[child_v] = dist[v] + distance_v;
        //         s.insert({dist[child_v], child_v});
        //     }
        // }
        for(int i=0;i<g[v].size();i++){
            int child_v=g[v][i].first;
            int wt=g[v][i].second;
            if(dist[v]+wt<dist[child_v]){
                dist[child_v]=dist[v]+ wt;
              s.insert({dist[child_v],child_v});
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dist[i] << " ";
    }
}
int main()
{
    int v, e;
    cout << "Enter the vlaue of verices and edges: " << endl;
    cin >> v >> e;
    cout << "Enter the vertices between edges and their corrosponding their weights:" << endl;
    for (int i = 0; i < e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        g[v1].push_back({v2, w});
        g[v2].push_back({v1, w});
    }
    dijkstra(0, v);
    return 0;
}