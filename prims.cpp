#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<pair<int, int>> g[N];
vector<int>parent(N,-1);
vector<bool>vis(N,false);
vector<int>dist(N,INT_MAX);
void prims(int source)
{
     set<pair<int, int>> st;//wt+vertex
     st.insert({0,source});
     vis[source] = true;
     dist[source] = 0;
     while(!st.empty())
     {
        auto node  = *st.begin();
        int vertex = node.second;
        vis[vertex] = true;
        st.erase(st.begin());
        for(int i=0;i<g[vertex].size();i++)
        {
            int child_vertex = g[vertex][i].first;
            int wt = g[vertex][i].second;
            if(!vis[child_vertex] && dist[child_vertex]>wt)
            {
                dist[child_vertex] = wt;
                st.insert({dist[child_vertex], child_vertex});
                parent[child_vertex] = vertex;
            }
        }
     }
}
int main()
{
    int total_cost=0;
    int vertex,e;
    cin>>vertex>>e;
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        g[u].push_back({v,wt});
        g[v].push_back({u,wt});
    }
    int source;
    cin>>source;
    prims(source);
    for(int i=1;i<=vertex;i++)
    {
        cout<<parent[i]<<" "<<i<<" "<<dist[i]<<endl;
        total_cost+=dist[i];
    }
    cout<<endl;
    cout<<total_cost<<endl;
}