#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the adjacency list
void addEdgeList(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected Graph
}

int main()
{
    int V = 4;

    // Adjacency Matrix
    int matrix[4][4] = {0};

    // Edge 0-1
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    // Edge 1-2
    matrix[1][2] = 1;
    matrix[2][1] = 1;

    // Edge 2-3
    matrix[2][3] = 1;
    matrix[3][2] = 1;

    cout << "Adjacency Matrix:" << endl;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Adjacency List
    vector<int> adj[V];

    addEdgeList(adj, 0, 1);
    addEdgeList(adj, 1, 2);
    addEdgeList(adj, 2, 3);

    cout << "\nAdjacency List:" << endl;

    for (int i = 0; i < V; i++)
    {
        cout << "Node " << i << ": ";

        for (int x : adj[i])
        {
            cout << "-> " << x << " ";
        }

        cout << endl;
    }

    return 0;
}