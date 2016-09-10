#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <list>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MOD 1000000007 // 10**9 + 7
#define INF 1e9
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))
#define CLEAR(a) memset((a),0,sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define For(i, a, b) for (int i = a; i < b; i++)
#define Rfor(i, b, a) for (int i = b; i > a; i--)
#define all(v) v.begin(), v.end()
#define ll long long
#define repi(i,n) for(int i=0;i<n;i++)
#define repl(i,n) for(ll i=0;i<n;i++)


using namespace std;
const double pi = acos(-1.0);

class Graph
{
	int v;
	list <int> *adj;
	void tsortutil(int v, bool visited[] , stack <int> &s);
public:
	void tsort();
	Graph (int v);
	void addEdge(int v, int w);
};

Graph::Graph(int v)
{
	this->v=v;
	adj =new list<int>[v];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::tsortutil(int v, bool visited[], stack<int> &s)
{
	visited[v]=true;
	for(list<int>::iterator i=adj[v].begin(); i!=adj[v].end(); i++)
	{
		if(!visited[*i])
			tsortutil(*i, visited, s);
	}
	s.push(v);
}
void Graph::tsort()
{
	bool visited[v];
	stack<int> s;
	for(int i=0;i<v;i++)
		visited[i]=false;
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
			tsortutil(i,visited,s);
	}

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	Graph g(6);
	g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
     cout<<"Following is a Topological Sort of the given graph \n";
     g.tsort();
     return 0;

}