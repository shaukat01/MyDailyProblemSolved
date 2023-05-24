#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> g[N];
void dijsktra(int source, int V)
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF); // pahle sabka infinite kar dete hai
    // ek visited v bana lete hai , waise nahi v banayenge to chalega
    // min dist wala node store krne ke liye ham priority queue ya set
    // use krenge
    // yaha pe mai set ka use karunge , kynki usme mujhe aasani
    // min distance wala node mil jayega
    // sabse pahle mai source ke dist ko zero krunga
    set<pair<int, int>> st;
    // graph me pahle vertex daalte hai fir weight lekin set me
    // ham pahle weight daalenge fir vertex
    // kynki minimum weight chahiye
    st.insert({0, source});
    // if(vis[])
    //	vis[source] = 1;
    dist[source] = 0;
    while (st.size() > 0)
    {
        auto node = *st.begin();
        int distance = node.first;
        // cout<<distance<<endl;
        int v = node.second;
        // pop kr do

        st.erase(st.begin());
        // ab is v ke har child ka distance update krenge agar wo
        // pahle chhota paaya gya to
        if (vis[v])
            continue;
        vis[v] = 1;
        for (int i = 0; i < g[v].size(); i++)
        {
            int child_v = g[v][i].first;
            int wt = g[v][i].second;
            if ((dist[v] + wt) < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    for (int i = 1; i <= V; i++)
    {
        cout << dist[i] << endl;
    }
}
int main()
{
    int v, e;
    cout << "Enter the no of vertices and egdes" << endl;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int wt, v1, v2;
        cout << "Enter the vertex1 and vertex2 and weight " << endl;
        cin >> v1 >> v2 >> wt;
        g[v1].push_back({v2, wt});
        // dhyaan yaha pe weight 2nd position pe hai
    }
    // call dijsktra with sourece node 1
    dijsktra(1, v);
    return 0;
}