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
	ll t,s,x;
	cin>>t>>s>>x;
	ll n1=x-t+s;
	ll n2=x-t-1;
	bool flag1=false;
	bool flag2=false;
	if(n1>0 and n1%s==0)
		flag1=1;
	if(n2>0 and n2%s==0)
		flag2=1;

	if(flag1 or flag2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}