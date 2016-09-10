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
//http://www.practice.geeksforgeeks.org/problem-page.php?pid=603

int main()
{
	int t;
	cin>>t;
	string s;
	int m1,m2,m3,n;
	int avg;
	
	while(t--)
	{
		cin>>n;
		pair<int,string> p[n];
		repi(i,n)
		{
			cin>>s>>m1>>m2>>m3;
			avg=(m1+m2+m3)/3;
			p[i]=mp(avg,s);
		}
		sort(p,p+n);
		cout<<p[n-1].second<<" "<<p[n-1].first<<endl;
	}
	return 0;
}