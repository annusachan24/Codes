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
	ll n;
	cin>>n;
	char ra[n][2];
	char la[n][2];
	char ch;
	repl(i,n)
	{
		cin>>ra[i][0]>>ra[i][1]>>ch>>la[i][0]>>la[i][1];

	}
	int flag=0;
	repl(i,n)
	{
		if(ra[i][0]=='O' and ra[i][1]=='O')
		{
			ra[i][0]='+';
			ra[i][1]='+';
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		repl(i,n)
		{
			if(la[i][0]=='O' and la[i][1]=='O')
			{
				la[i][0]='+';
				la[i][1]='+';
				flag=1;
				break;
			}
		}	
	}
	if(flag)
	{
	 cout<<"YES"<<endl;
		repl(i,n)
		{
			cout<<ra[i][0]<<ra[i][1]<<ch<<la[i][0]<<la[i][1]<<endl;
		}
	}
	else
		cout<<"NO";
	return 0;

}