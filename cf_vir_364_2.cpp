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
#define ll long long int
#define repi(i,n) for(int i=0;i<n;i++)
#define repl(i,n) for(ll i=0;i<n;i++)


using namespace std;
const double pi = acos(-1.0);

int main()
{
	ll n,m;
	cin>>n>>m;
	//n=n+1;
	//m=m+1;
	ll a[n+1][n+1];
	repl(i,n+1)
	repl(j,n+1)
	a[i][j]=0;
	ll mi,mj;
	ll x=0;
	ll c[m];
	repl(b,m)
	c[b]=0;
	repl(i,m)
	{
		cin>>mi>>mj;
		repl(i,n+1)
		a[mi][i]=1;
		repl(i,n+1)
		a[i][mj]=1;
		/*cout<<"board is "<<endl;
		for(ll j=1;j<n+1;j++)
		{

		for(ll k=1;k<n+1;k++)
		cout<<a[j][k]<<" ";
		cout<<endl;
		} */
		//ll c=0;
		//cout<<"answer "<<endl;
		
		//ll x=0;
		for(ll q=1;q<n+1;q++)
		{
			for(ll p=1;p<n+1;p++)
			{
				if(a[q][p]==0)
				{
					c[x]++;
					
				}
			}
		}
		x++;
		

	}
	repl(z,m)
		cout<<c[z]<<" ";
	


}