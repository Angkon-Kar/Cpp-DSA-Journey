#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Add Edge
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected Graph
}

// BFS Traversal
void BFS(vector<int> adj[], int V, int start)
{
    vector<bool> visited(V, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS: ";

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }

    cout << endl;
}

// DFS Helper Function
void DFSUtil(int u, vector<int> adj[], vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            DFSUtil(v, adj, visited);
        }
    }
}

// DFS Traversal
void DFS(vector<int> adj[], int V, int start)
{
    vector<bool> visited(V, false);

    cout << "DFS: ";
    DFSUtil(start, adj, visited);
    cout << endl;
}

int main()
{
    int V = 5;

    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);

    BFS(adj, V, 0);
    DFS(adj, V, 0);

    return 0;
}