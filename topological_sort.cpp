#include <bits/stdc++.h>
using namespace std;

void topo(vector<vector<int>> &adj, int n)
{
    vector<int> ind(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += adj[j][i];
        }
        ind[i] = sum;
    }
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (ind[i] == 0)
            
        st.push(i);
    }
    vector<int> sol;
    while (!st.empty())
    {
        int top = st.top();
        sol.push_back(top);
        st.pop();
        for (int i = 1; i <= n; i++)
        {
            if (adj[top][i] == 1)
            {
                ind[i]--;
                if (ind[i] == 0)
                {
                    st.push(i);
                }
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
    int n;
    cin >> n;
    vector<vector<int>> arr((n + 1), vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    topo(arr, n);
    return 0;
}
