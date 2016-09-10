#include <iostream>
#include <list>
using namespace std;

class Graph
{
	int v;
	list <int> *adj;
public:
	Graph(int v);
	void addEdge(int v, int w);
	void BFS(int s);
};



Graph::Graph(int t)
{
	this->v=t;
	adj=new list<int>[t];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}


void Graph::BFS(int s)
{
	bool *visited =new bool[v];
	for(int i=0;i<v;i++)
		visited[i]=false;
	list <int> q;

	visited[s]=true;
	q.push_back(s);
	list <int>::iterator i;

	while(!q.empty())
	{
		s=q.front();
		cout<<s<<" ";
		q.pop_front();
		for(i=adj[s].begin();i!=adj[s].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				q.push_back(*i);
			}
		}
	}
}


int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}