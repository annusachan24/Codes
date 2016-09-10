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
#include <functional>
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
//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1304

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int k;
		//getline(cin,s);
		cin>>s;
		cin>>k;
		//cout<<s<<endl;
		int l=s.length();
		int a[26]={0};
		repi(i,l)
		a[s[i]-97]++;
		int suma=0;
		For(i,0,26)
		{
			//cout<<a[i]<<" ";
			suma+=a[i];
			
		}
		//cout<<endl;
		
		sort(a,a+26,greater<int>());
		//sort(a,a+26);
		/*For(i,0,26)
		cout<<a[i]<<" ";
		cout<<endl;*/
		if(suma<=k)
		{
			cout<<"0"<<endl;

		}
		else
		{	
			For(i,0,k)
			{
				a[0]--;
				sort(a,a+26,greater<int>());
				
			}
			/*For(i,0,26)
			cout<<a[i]<<" ";
			cout<<endl;*/
			int sum=0;
			For(i,0,26)
			sum+=(a[i]*a[i]);
			cout<<sum<<endl;
		}
	}
	return 0;
}