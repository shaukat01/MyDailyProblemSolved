#include <iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
// template <typename T>

class Graph {
public:
  unordered_map<int, list<int> > adjList;

  void addEdge(int u, int v, bool direction) {
     //direction = 0 -> undirected graph
     //direction = 1 -> directed graph
     //create an edge from u to v
    adjList[u].push_back(v);
    if(direction == 0)
    {
      //undirected edge
      //create an edge from v to u
      adjList[v].push_back(u);
    }
  }

  void printAdjacencyList() {
    for(auto node: adjList) {
      cout << node.first << "-> " ;
      for(auto neighbour: node.second) {
        cout <<neighbour<<", ";
      }
      cout << endl;
    }
  } 
};

int main(){

    Graph g;

//   n -> number of nodes in graph
  int n = 5;
//   //for undirected age
//   g.addEdge(0,1,0);
//   g.addEdge(1,2,0);
//   g.addEdge(0,2,0);


 //for directed age 
  g.addEdge(0,1,1);
  g.addEdge(1,2,1);
  g.addEdge(0,2,1);
 
  cout<<"The adjacency list is: "<<endl;
  g.printAdjacencyList();

    return 0;
}