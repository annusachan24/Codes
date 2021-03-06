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

void permute(string s,int l,int r, vector<string> *v)//seeeeeeeeeeeeeee how to pass vector
{
	if(l==(r-1))
		(*v).push_back(s);
	else
	{
		for(int i=l;i<r;i++)
		{
			swap(s[l],s[i]);
			permute(s,l+1,r,v);
			swap(s[l],s[i]);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		vector <string> v;
		permute(s,0,l,&v);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}