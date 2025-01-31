#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<int> adj[], vector<bool> &visited) {
    // Mark the current node as visited
    visited[node] = true;

    // Traverse all adjacent vertices
    for (int neighbor : adj[node]) {
        // If the adjacent node is not visited, perform DFS
        if (!visited[neighbor]) {
            if (dfs(neighbor, node, adj, visited)) {
                return true; // If a cycle is found, return true
            }
        }
        // If the adjacent node is visited and is not the parent, it's a cycle
        else if (neighbor != parent) {
            return true;
        }
    }

    return false; // No cycle found
}

bool containsCycle(int V, vector<pair<int, int>> &edges) {
    // Create an adjacency list
    vector<int> adj[V];
    for (auto edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    // Create a visited array
    vector<bool> visited(V, false);

    // Check each component of the graph
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, adj, visited)) {
                return true; // Cycle found
            }
        }
    }

    return false; // No cycle found in any component
}

int main() {
    int V, E;
    
    // Take input for the number of vertices and edges
    cout << "Enter the number of vertices (V): ";
    cin >> V;
    
    cout << "Enter the number of edges (E): ";
    cin >> E;
    
    vector<pair<int, int>> edges;

    // Take input for each edge
    cout << "Enter the edges (as pairs of vertices):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    // Check if the graph contains a cycle
    if (containsCycle(V, edges)) {
        cout << "Output: true (Cycle detected)" << endl;
    } else {
        cout << "Output: false (No cycle detected)" << endl;
    }

    return 0;
}
	