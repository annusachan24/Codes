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

ll hcf(ll n1, ll n2)
{
	while(n1!=n2)
	{
		if(n1>n2)
			n1=n1-n2;
		else
			n2=n2-n1;
	}
	return n1;
}

ll rechcf(ll n1, ll n2)//n1>n2
{
	if(n2!=0)
		return rechcf(n2,n1%n2);
	else
		return n1;
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll num= 9*m;
		ll den= 8*n+m;
		ll h=hcf(num,den);
		ll num1=num/h;
		ll den1=den/h;
		cout<<num1<<"/"<<den1;
		cout<<endl;
	}
	return 0;
}