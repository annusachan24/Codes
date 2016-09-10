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
#include <bits/stdc++.h>
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
#define max_size 100
using namespace std;
const double pi = acos(-1.0);
int find_index_begin(int a[], int key, int n, bool flag[])
{
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==key and flag[i])
			{
				
				return (i+1);
			}
	}
}
int find_index_end(int a[], int key, int n, bool flag[])
{
	
	for(int i=n;i>=0;i--)
	{
		if(a[i]==key and flag[i])
			{
				
				return (i+1);
			}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	repi(i,n)
	{
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b,b+n);
	int begin,endi;
	bool flag[n];
	repi(i,n)
	flag[i]=true;
	repi(i,n/2)
	{
		//if(flag[i] or flag[n-1-1])
		
		begin=find_index_begin(a,b[i],n,flag);
		endi=find_index_end(a,b[n-i-1],n,flag);
		flag[begin-1]=false;
		flag[endi-1]=false;
		cout<<begin<<" "<<endi<<endl;
	}
	return 0;
	
}

