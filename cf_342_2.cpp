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


using namespace std;
const double pi = acos(-1.0);
ll max(ll a, ll b, ll c)
{
	if(a>b and a>c)
		return a;
	if(b>a and b>c)
		return b;
	else
		return c;
}



int main()
{
	ll n;
	cin>>n;
	//ll k=200005;
	ll k=6;
	ll a[k][k];
	repl(i,k)
	repl(j,k)
	a[i][j]=0;
	ll x,y;
	ll m=0;
	repl(i,n)
	{
		cin>>x>>y;
		//m= max(m,x,y);
		a[x][y]=1;
	}

	repl(i,k)
	{
	repl(j,k)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}

	vector <ll> v;
	ll c;
	//for principal diagonal
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=1;j<=k;j++)
		{
			if(i==j)
			{
				if(a[i][j]==1)
					c++;
			}
		}
		
	}
	v.push_back(c);
	//for secondary dia
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=1;j<=k;j++)
		{
			if(i+j==k)
			{
				if(a[i][j]==1)
					c++;
			}
		}
	
	}
		v.push_back(c);

	// for lower left 
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=1;j<=k;j++)
		{
			if(a[i][j]==1 and i>j)
				c++;
		}
		v.push_back(c);
	}
	// for upper right 
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=0;j<=k;j++)
		{
			if(a[i][j]==1 and i<j)
				c++;
		}
		v.push_back(c);
	}

	ll z=k+1;
	//upper left
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=0;j<=k;j++)
		{
			if(a[i][j]==1 and i+j==z)
			{
				c++;
				z--;
			}
		}
		v.push_back(c);
	}

	ll p=k+1;
	for(ll i=1;i<=k;i++)
	{
		c=0;
		for(ll j=0;j<=k;j++)
		{
			if(a[i][j]==1 and i+j==p)
			{
				c++;
				p++;
			}
		}
		v.push_back(c);
	} 

	for(ll i=0;i<v.size();i++)
	cout<<v[i];	


}