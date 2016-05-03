#include <iostream>
#include <list>
using namespace std;
class Graph
{ public:
	int V; //for number of vertices 
	list<int> *adj; // Pointer to the array containg adjacency lists 
	Graph(int V);	// constructor
	void addEdge(int v, int w); // Adding an edge to the graph
	void BFS(int s); // prints BFS transversal from a source s
};

Graph(int v){v = 0;
}

void addEdge(int v, int w){
adj[v].push_back(w); // Adding  
}

void BFS(int s){

bool *visited = new bool[V]; // this bool will be used for checking if a node is visited or not
for(i=0;i<V;i++){ visited[i] = false;} // Making every node unvisited
//queue for BFS
list<int> queue;
// Visiting S and pushing it back
visited[s] = true;
queue.push_back(s);

list<int>::iterator i;



}


