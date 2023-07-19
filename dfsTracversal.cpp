#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // undirected edge
            // create an edge from v to u
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "-> ";
            for (auto neighbour : node.second)
            {
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }

    void dfs(int src, unordered_map<int, bool>& visited) {
    cout << src << ", ";
    visited[src] = true;

    for(auto neighbour: adjList[src]) { 
      if(!visited[neighbour] ) {
        dfs(neighbour, visited);
      }
    }
  }

};

int main()
{

    Graph g;

    //   n -> number of nodes in graph
    int n = 5;
    //   //for undirected age
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(0, 2, 0);

    // for directed age
    //   g.addEdge(0,1,1);
    //   g.addEdge(1,2,1);
    //   g.addEdge(0,2,1);
    cout << "The adjacency list is: " << endl;
    g.printAdjacencyList();

 
    cout << "Printing DFS Traversal: " << endl;
       // run a loop for all nodes
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)   
    {
        if (!visited[i])
        {
            g.dfs(i, visited);
        }
    }

    return 0;
}