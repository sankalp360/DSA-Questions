#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int v, vector<int> &vis)
{
    queue<int> q;
    q.push(v);
    vis[v] = 1;
    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for (auto x : adj[node])
        {
            if (!vis[x])
            {
                q.push(x);
                vis[x] = 1;
            }
        }
    }
}

int main()
{
    int u, v;
    cin >> u >> v;

    vector<int> adj[u + 1];
    vector<int> vis(u + 1, 0);

    for (int i = 0; i < v; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= u; i++)
    {
        if (!vis[i])
            bfs(adj, i, vis);
    }
}