#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;
	void DFSUtil(int v, bool visited[]);
public:
	Graph(int V);
	void addEdge(int v, int w);
	void DFS(int v);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{

	visited[v] = true;
	cout << v << " ";

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

void Graph::DFS(int v)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	DFSUtil(v, visited);
}

int main()
{
    int n,x,y,k;
    cin>>n;
	Graph g(n);
    vector<bool> cats;
    k = n;
    while(k--) {
        cin>> y;
        cats.push_back(y);
    }
    k = n-1;
	while(k--) {
        cin>>x>>y;
        g.addEdge(x-1,y-1);
	}

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(0);

	return 0;
}
