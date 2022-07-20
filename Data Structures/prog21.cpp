// Cycle detection in undirected graph
// If we return to a visited vertex then it is cyclic

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent)
{
    visited[src] = true;
    for (auto i : adj[src])
    {
        if (i != parent)
        {
            if (visited[i])
                return true;
            if (!visited[i] and iscycle(i, adj, visited, src))
            {
                return true;
            }
        }
    }
    return false;
}

int32_t main()
{
    // n - no. of vertices
    // m - no. of edges
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<vector<int>> adj(n);

    // creating the adjacency list
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u-->v and v-->u
        adj[u].push_back(v);
        adj[v].push_back(u); // as it is an undirected graph
    }

    bool cycle = false;

    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and iscycle(i, adj, visited, -1))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cout << "Cycle is present";
    }
    else
    {
        cout << "Cycle is absent";
    }
}