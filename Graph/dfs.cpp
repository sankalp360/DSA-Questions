#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int node, vector<int> &vis)
{
    cout << node << " ";
    vis[node] = 1;
    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            dfs(adj, x, vis);
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<int> adj[v + 1];
    vector<int> vis(v + 1, 0);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            dfs(adj, i, vis);
        }
    }
}