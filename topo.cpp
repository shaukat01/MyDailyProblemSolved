#include <bits/stdc++.h>
using namespace std;

void topo(vector<vector<int>> &adj, int n)
{

    // step-1:Create Indegree Array and fill
    vector<int> indeg(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += adj[j][i];
        }
        indeg[i] = sum;
    }

    // step-2:push vertex with 0 indegree to stack
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            st.push(i);
    }

    // step-3:add to solution and pop and add adjacent by reducing indegree
    vector<int> sol;
    while (!st.empty())
    {
        int top = st.top();
        sol.push_back(top);
        st.pop();

        // reduce indegree of adjacent by 1
        for (int i = 1; i <= n; i++)
        {
            if (adj[top][i] == 1)
            {
                indeg[i]--;

                if (indeg[i] == 0)
                    st.push(i);
            }
        }
    }

    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter Number of Vertices" << endl;
    int n;
    cin >> n;

    cout << "Enter Adjacency Matrix" << endl;
    vector<vector<int>> adj(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adj[i][j];
        }
    }

    topo(adj, n);

    return 0;
}