//http://www.geeksforgeeks.org/reverse-words-in-a-given-string/
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
	getline(cin,s);
	int l=s.length();
	int space=0;
	repi(i,l)
	{
		if(s[i]==' ')
			space++;
	}
	string s_arr[space+1];
	int h=0;
	repi(i,l)
	{
		string c="";
		for(int j=i;j<l;j++)
		{
			if(s[i]!=' ')
			{
				c=c+s[i];
				i++;
			}
			else
				break;
		}
		s_arr[h++]=c;
	}
	for(int i=h-1;i>=0;i--)
		cout<<s_arr[i]<<" ";

	return 0;

}