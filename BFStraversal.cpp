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
    void bfs(int src,unordered_map<int, bool> &visited)
    {
         
        queue<int> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            cout << frontNode << ", ";

            // insert neighbours
            for (auto neighbour : adjList[frontNode])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
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

    // unordered_map<int, bool> visited;
    // run a loop for all nodes
    cout << "Printing BFS Traversal: " << endl;
    
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)   //har node ko source maan ke call karege
    {
        if (!visited[i])
        {
            g.bfs(i, visited);
        }
    }

    return 0;
}