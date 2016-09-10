#include <iostream>
#include <list>
using namespace std;
class Graph
{
	int v;
	list<int> *adj;
	bool iscycleutil(int v, bool visited[], bool *recustack);
public:
	Graph(int v);
	void addEdge(int v,int w);
	bool  iscycle();
};

Graph::Graph(int t)
{
	this->v=t;
	adj =new list<int> [t];
	//adj[t];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

bool Graph::iscycleutil(int v, bool visited[], bool *recustack)
{
	if(visited[v]==false)
	{
		visited[v]=true;
		recustack[v]=true;

		list <int>:: iterator i;
		for(i=adj[v].begin(); i!=adj[v].end(); i++)
		{
			if(!visited[*i] and iscycleutil(*i, visited, recustack))
			return true;
			else if (recustack[*i])
				return true;
		}
	}
	recustack[v]=false;
	return false;
}

bool Graph::iscycle()
{
	
	bool visited[v];
	bool recustack[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
		recustack[i]=false;
	}
	for(int i=0;i<v;i++)
	{
		if(iscycleutil(i,visited,recustack))
			return true;
	}

	return false;
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if(g.iscycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}

