#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
vector<pair<int, pair<int, int>>> g; // weights +(vertex +vertex)
void make(int vertex)
{
    parent[vertex] = vertex;
}
int find(int vertex)
{
    if (vertex == parent[vertex])
        return vertex;
    return find(parent[vertex]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        parent[b] = a;
    }
}

int main()
{
    int vi, e;
    cout << "Enter the values of vertex and edges: " << endl;
    cin >> vi >> e;
    cout << "Enter the vertices and their corrosponding edges: " << endl;
    for (int i = 0; i < e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        g.push_back({w, {v1, v2}});
    }
    sort(g.begin(), g.end());
    for (int i = 0; i < vi; i++)
    {
        make(i);
    }
    int total_cost = 0;

    for (int i = 0; i < g.size(); i++)
    {
        int w = g[i].first;
        int u = g[i].second.first;
        int v = g[i].second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v);
        total_cost = total_cost + w;
        cout << "The vertices which is selected and atheir corrosponding edges are: " << endl;
        cout << u << " " << v << " " << w << endl;
    }

    cout << "Total Cost of given Spanning tree is: " << total_cost << endl;
    return 0;
}