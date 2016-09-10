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
	string s;
	
	int t;

	cin>>t;
	/*while(t--)
	{
		char *ans=new char[1000];
		cin>>s;
		int l=s.length();
		int n=0,south=0,e=0,w=0;
		int si,ni,ei,wi;
		repi(i,l)
		{
			if(s[i]=='S')
			{
				if(n==1)
				{
					s[i]='q'; s[ni]='q'; n=0;
				}
				else
				{
					south=1; si=i;
				}
			}

			if(s[i]=='N')
			{
				if(south==1)
				{
					s[i]='q';s[si]='q';south=0;
				}
				else
				{
					n=1; ni=i;
				}
			}
			if(s[i]=='E')
			{
				if(w==1)
				{
					s[i]='q';s[wi]='q';w=0;
				}
				else
				{
					e=1; ei=i;
				}
			}
			if(s[i]=='W')
			{
				if(e==1)
				{
					s[i]='q';s[ei]='q';e=0;
				}
				else
				{
					w=1; wi=i;
				}
			}
		}
		int k=0;
		repi(i,l)
		{
			if(s[i]!='q')
				ans[k++]=s[i];
		}
		sort(ans,ans+k);
		cout<<ans<<endl;
		


	}*/
	while(t--)
	{
		int north=0,south=0,east=0,west=0;
		cin>>s;
		int l=s.length();
		repi(i,l)
		{
			if(s[i]=='N')
				north++;
			if(s[i]=='S')
				south++;
			if(s[i]=='E')
				east++;
			if(s[i]=='W')
				west++;
		}
		char *ans=new char[1002];
		int k=0;
		if(north>south)
		{
			for(int i=0;i<north-south;i++)
				ans[k++]='N';
		}
		if(south>north)
		{
			for(int i=0;i<south-north;i++)
				ans[k++]='S';
		}
		if(east>west)
		{
			for(int i=0;i<east-west;i++)
				ans[k++]='E';
		}
		if(west>east)
		{
			for(int i=0;i<west-east;i++)
				ans[k++]='W';
		}

		sort(ans,ans+k);
		cout<<ans<<endl;	
		
	}

	return 0;
}