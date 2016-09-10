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
#define v vector<pair<int , int> >;
typedef vector<pair<int , int> > vp;
using namespace std;
const double pi = acos(-1.0);

int main()
{
	int n;
	cin>>n;
	
	//vector<pair<int , int> > m,f;
	//v m,f;
	vp m;
	vp f;
	char c;
	int x,y;
	repi(i,n)
	{	
		cin>>c>>x>>y;
		if(c=='M')
		{
			m.push_back(make_pair(x,y));
		}
		else
		{
			f.push_back(make_pair(x,y));
		}
	}

	int am,af,ma=0;
	//vector<pair<int , int> >::iterator it1, it2;
	//v::iterator it1,it2;
	vp :: iterator it1;
	vp :: iterator it2;
	for(int d=1;d<=366;d++)
	{
		am=0;
		af=0;
		for(it1=m.begin();it1!=m.end();it1++)
			if(d>=it1->first and d<=it1->second)
				am++;
		for(it2=f.begin();it2!=f.end();it2++)
			if(d>=it2->first and d<=it2->second)
				af++;
		ma=max(ma,(min(am,af)*2));
	}
	cout<<ma;
	return 0;
}