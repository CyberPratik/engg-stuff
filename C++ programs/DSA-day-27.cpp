#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to find the shortest path in an unweighted graph using BFS
int shortestPath(int V, vector<pair<int, int>> &edges, int start, int end) {
    // Create an adjacency list
    vector<int> adj[V];
    for (auto edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    // Create a visited array to keep track of visited nodes
    vector<bool> visited(V, false);

    // Create a distance array to store the distance of each node from the start
    vector<int> distance(V, -1);

    // BFS initialization
    queue<int> q;
    q.push(start);
    visited[start] = true;
    distance[start] = 0;

    // Perform BFS
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        // Explore neighbors
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);

                // If we reach the destination, return the distance
                if (neighbor == end) {
                    return distance[neighbor];
                }
            }
        }
    }

    // If there's no path from start to end
    return -1;
}

int main() {
    int V, E, start, end;

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

    // Take input for start and end nodes
    cout << "Enter the start node: ";
    cin >> start;
    
    cout << "Enter the end node: ";
    cin >> end;

    // Call the function to find the shortest path
    int result = shortestPath(V, edges, start, end);
    
    if (result != -1) {
        cout << "The shortest path length is: " << result << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
