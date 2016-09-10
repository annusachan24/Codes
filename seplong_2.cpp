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
		string s;
		cin>>s;
		int n=s.length();
		int i,j;
		int flag=1;
		for(i=0,j=n-1;i<=(n-1)/2;i++,j--)
		{
			if(s[i]=='.' and s[j]=='.')
			{
				s[i]=s[j]='a';
			}
			else if(s[i]!=s[j])
			{
				if(s[i]=='.')
					s[i]=s[j];
				else if(s[j]=='.')
					s[j]=s[i];
				else
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
			cout<<s<<endl;
		else
			cout<<"-1"<<endl;
	}
}