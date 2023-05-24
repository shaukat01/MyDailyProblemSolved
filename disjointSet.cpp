#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
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
    return 0;
}