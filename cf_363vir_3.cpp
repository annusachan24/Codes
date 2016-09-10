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
	int n;
	cin>>n;
	int a[n];
	repi(i,n)
	cin>>a[i];
	if(n==1)
	{
		if(a[0]==0)
			cout<<"1";
		else
			cout<<"0";
		return 0;
	}
	char ans[n];
	switch(a[0])
	{
		case 0:	ans[0]='r';
		break;
		case 1: ans[0]='c';
		break;
		case 2: ans[0]='g';
		break;
		case 3: if(a[1]==1 or a[1]==3)
					ans[0]='g';
				if(a[1]==2 or a[1]==3)
					ans[0]='c';
				else
					ans[0]='c';//doesnot matter its gonna be rest anyway
		break;
	}

	for(int i=1;i<n-1;i++)
	{
		switch(a[i])
		{
			case 0: ans[i]='r';
			break;
			case 1: if(ans[i-1]!='c')
						ans[i]='c';
					else
						ans[i]='r';
			break;
			case 2: if(ans[i-1]!='g')
						ans[i]='g';
					else
						ans[i]='r';
			break;
			case 3: if(ans[i-1]=='c')
						ans[i]='g';
					if(ans[i-1]=='g')
						ans[i]='c';
					else if(ans[i-1]=='r')
						{
							if(a[i+1]==1 or a[i+1]==3)
								ans[i]='g';
							if(a[i+1]==2 or a[i+1]==3)
								ans[i]='c';
							else if(ans[i+1]==0)
								ans[i]='r';
						}
			break;
		}
	}

	if(ans[n-2]=='r')
	{
		switch(a[n-1])
		{
			case 0:	ans[n-1]='r';
			break;
			case 1: ans[n-1]='c';
			break;
			case 2: ans[n-1]='g';
			break;
			case 3: ans[n-1]='g';
			break;
		}
	}

	if(ans[n-2]=='c')
	{
		switch(a[n-1])
		{
			case 0:	ans[n-1]='r';
			break;
			case 1: ans[n-1]='r';
			break;
			case 2: ans[n-1]='g';
			break;
			case 3: ans[n-1]='g';
			break;
		}
	}

	if(ans[n-2]=='g')
	{
		switch(a[n-1])
		{
			case 0:	ans[n-1]='r';
			break;
			case 1: ans[n-1]='c';
			break;
			case 2: ans[n-1]='r';
			break;
			case 3: ans[n-1]='c';
			break;
		}
	}


	int count=0;
	repi(i,n)
	{
		//cout<<ans[i]<<" ";
		if(ans[i]=='r')
			count++;
	}

	cout<<count;
	return 0;
}