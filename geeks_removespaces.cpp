//http://www.practice.geeksforgeeks.org/problem-page.php?pid=454
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
	int t;
	cin>>t;
	while(t--)
	{
		//string s;
		//getline(cin,s);
		//cin>>s;
		//char dummy;
		//cin>>dummy;
		cin.ignore();
		char s[1005];
		//scanf("%c",s);
		cin.getline(s,sizeof(s));
		int l=0;
		while(s[l++]!='\0');
		string ans="";
		repi(i,l)
		{
			if(s[i]!=' ')
				ans+=s[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}