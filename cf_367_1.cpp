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
#define dd double

using namespace std;
const double pi = acos(-1.0);
double dis(dd x1, dd y1, dd x2, dd y2)
{
	dd d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	//cout<<d<<endl;
	return d;
}
int main()
{
	dd a,b,n,x,y,v;
	cin>>a>>b;
	cin>>n;
	cin>>x>>y>>v;
	dd min,m;
	/*if(dis(a,b,x,y)==0)
		min=0;
	else
		min=dis(a,b,x,y)/v;*/
	min=dis(a,b,x,y)/v;
	//cout<<min<<endl;
	n--;
	while(n--)
	{
		cin>>x>>y>>v;
		/*if(dis(a,b,x,y)==0)
			min=0;
		else
			min=dis(a,b,x,y)/v; */
		m = dis(a,b,x,y)/v;
		//cout<<m<<endl;
		if(m<min)
		{
			min=m;
			//cout<<"here";
		}
	}
	printf("%.20f\n",min );
	return 0;
}