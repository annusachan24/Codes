#include <iostream>
#include <functional>
#include <queue>
#include <list>
#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >

using namespace std;

class Graph
{
	int v;
	list <pii> *adj;
	
public:
	
	Graph(int v);
	void addEdge(int v,int w,int wt);
	void dijkstra(int source,int nodes);

};

Graph::Graph(int t)
{
	this->v=t;
	adj=new list<pii> [t];
}

void Graph::addEdge(int v,int w, int wt)
{
	adj[v].push_back(make_pair(w,wt));
	
}

void Graph:: dijkstra(int source,int nodes)
{
	priority_queue<pii, vector<pii>, greater<pii> > q;
	int dist[MAX];
	bool visited[MAX];
	for(int i=0;i<nodes;i++)
    {
    	dist[i]=INF;
    	visited[i]=0;
    }
	dist[source]=0;

    q.push(pii(source,0));
    int a,b,c;
    while(!q.empty())
    {
    	a=q.top().first;//get first(smallest) element of priority queue
    	q.pop();
    	if(visited[a]) continue;

    	list <pii>:: iterator i;
		for(i=adj[a].begin(); i!=adj[a].end(); i++)
		{
			//b=adj[a][i].first;//the adjacent node of a
			//c=adj[a][i].second;//wt of adjacent node of a
			b=(*i).first;
			c=(*i).second;
			if(visited[b]==0 and dist[a]+c<dist[b])
			{
				dist[b]=dist[a]+c;
				q.push(pii(b,dist[b]));
			}
		}
		visited[a]=1; //done with a
    }
    for(int i=0;i<nodes;i++)
    {
    	cout<<"node "<<i<<" at distance "<<dist[i]<<" from the source "<<source<<endl;
    }


}

int main()
{
	int   nodes=9;
	//cin>>edges>>nodes;;
	Graph g(nodes);
	g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    
    //assuming source in 0
    int source =0;
    
    g.dijkstra(source,nodes);
}