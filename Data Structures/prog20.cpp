// Topological Sort - It is a linear ordering of its vertices such that for every directed edge uv for vertex u to v, u comes before vertex v in the ordering.
// Gragh should be directed and acyclic & every DAG will have atleast one topological sorting.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    // n - no. of vertices
    // m - no. of edges
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector<vector<int>> adj_list(n);
    vector<int> indeg(n, 0);

    // creating the adjacency list
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u-->v
        adj_list[u].push_back(v);
        indeg[v]++;
    }

    // Inserting vertices to queue whose indegree is 0
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        // Showing the output and making queue empty immediately
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";

        // reducing indegree of the rest ages and inserting to queue
        for (auto it : adj_list[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }
}