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
#define ld long double

using namespace std;
const double pi = acos(-1.0);
int main()
{
	string s;
	cin>>s;
	int l=s.length();
	//cout<<s<<endl;
	//cout<<l;
	int dec,e,newdec;
	repi(i,l)
	{
		if(s[i]=='.')
			dec=i;
		if(s[i]=='e')
			e=i;
	}
	//cout<<dec<<" "<<e<<endl;
	int flag=1;
	int k=0;
	for(k=0;k<dec;k++)
	{
		if(s[k]!=0)
			break;
	}
	if(k==dec-1)
	{
		flag=0;
		cout<<"all zeros before decimal"<<endl;
	}

	/*int last;
	last=s[l-1]-48;
	//cout<<last;
	newdec=dec+last;
	cout<<newdec<<endl;

	if(newdec<e)
	{
		for(int i=dec;i<=dec+last;i++)
		{
			s[i]=s[i+1];
		}
		s[dec+last]='.';
		for(int i=0;i<e;i++)
		{

			cout<<s[i];
		}
		return 0;
	}
*/
	
	
	return 0;
}