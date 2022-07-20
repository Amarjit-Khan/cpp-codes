// Cycle detection in directed graph
// If we return to a visited vertex then it is cyclic
// if wewe do uding dfs then time taken in worst case is O(v+e)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack)
{
    stack[src] = true;
    if (!visited[src])
    {
        visited[src] = true;
        for (auto i : adj[src])
        {
            if (!visited[i] and iscycle(i, adj, visited, stack))
            {
                return true;
            }
            if (stack[i])
                return true;
        }
    }
    stack[src] = false;
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
    }

    bool cycle = false;

    vector<int> stack(n, 0);
    vector<bool> visited(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and iscycle(i, adj, visited, stack))
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