#include <iostream>
#include <cmath>
#include <limits.h>
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
	ll n;
	cin>>n;
	string a;
	ll dis[n];
	cin>>a;
	repl(i,n)
	cin>>dis[i];

	ll ans;
	int flag=0;
	ll min=INT_MAX;
	repl(i,n-1)
	{
		if(a[i]=='R' and a[i+1]=='L')
		{
			flag=1;
			ans=(dis[i+1]-dis[i])/2;
			//cout<<"min is "<<min<<endl;
			//cout<<"ans is "<<ans<<endl;
			if(ans<min)
				min=ans;
		}
	}
	if (flag)
		cout<<min;
	else
		cout<<"-1";
	return 0;
}
