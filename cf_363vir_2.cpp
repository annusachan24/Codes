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

int main()
{
	ll n,m;
	cin>>n>>m;
	char a[n][m];
	repl(i,n)
	repl(j,m)
	cin>>a[i][j];
	vector<ll> row,col;
	ll cnt=0;
	repl(i,n)
	{
		ll r_count=0;
		repl(j,m)
		{
			if(a[i][j]=='*')
				{
					//cout<<"row star "<<a[i][j]<<" ";
					r_count++;
					cnt++;
				}
		}

		row.pb(r_count);
		
	}
	repl(i,m)
	{
		ll c_count=0;
		repl(j,n)
		{
			if(a[j][i]=='*')
				c_count++;
		}
		col.pb(c_count);
	}

	/*for(ll i=0;i<row.size();i++)
		cout<<i<<" row star "<<row[i]<<endl;

	for(ll i=0;i<col.size();i++)
		cout<<i<<" col star "<<col[i]<<endl;
	cout<<cnt<<endl;*/
	ll x=-1,y=-1;
	repl(i,n)
	{
		repl(j,m)
		{
			if(a[i][j]=='*')
			{
				if(row[i]+col[j]-1==cnt)
				{
					x=i;
					y=j;
				}
			}
			else
			{
				if(row[i]+col[j]==cnt)
				{
					x=i;
					y=j;
				}
			}
		}

	}

	if(x!=-1 and y!=-1)
	{
		cout<<"YES"<<endl;
		cout<<x+1<<" "<<y+1;
	}
	else
		cout<<"NO";
	return 0;
}