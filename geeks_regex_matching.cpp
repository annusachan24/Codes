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
//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1313
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string pattern, test;
		cin>>pattern>>test;
		int n1=pattern.find("^");
		int n2=pattern.find("$"); 
		int flag=0;
		if(pattern.find("^")!=string::npos)
			{
				//cout<<"^ found"<<endl;
				int pl=pattern.size();
				string pattern_check(pattern,1,pl-1);
				//cout<<"patern to be matched is "<<pattern_check<<endl;
				if(test.find(pattern_check)!=string::npos)
					//cout<<"1"<<endl;
					flag=1;
			}
		if(pattern.find("$")!=string::npos)
		{
			//cout<<"$ found"<<endl;
			int pl=pattern.size();
			string pattern_check(pattern,0,pl-1);
			//cout<<"patern to be matched is "<<pattern_check<<endl;
			/*char *ch=new char[1000];
			for(int i=0;i<test.size();i++)
				ch[i]=test[i];
			
			reverse(ch,ch+strlen(ch));
			cout<<ch<<endl; */
			if(test.find(pattern_check)!=string::npos)
				{
					//cout<<"2"<<endl;
					flag=1;
				}
		}
		if(test.find(pattern)!=string::npos)
		{
			//cout<<"pattern found in the test"<<endl;
			flag=1;
		}

		if(flag)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}