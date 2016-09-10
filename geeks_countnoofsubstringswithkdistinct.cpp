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

//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1204

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int k;
		cin>>s;
		cin>>k;
		
		int l=s.length();
		int res=0;
		repi(i,l)
		{
			int dist_count=0;
			int count[26]={0};
			//memset(count,0,sizeof(count));
			For(j,i,l)
			{
				if(count[s[j]-'a']==0)
					dist_count++;

				count[s[j]-'a']++;

				if(dist_count==k)
					res++;

			}

		}
		cout<<res<<endl;
	}
	return 0;
}