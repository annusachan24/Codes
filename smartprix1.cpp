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
#define max 10
#define max1 100
using namespace std;
const double pi = acos(-1.0);

int main()
{
	
	string rep;
	string pos;

	//cin>>rep;
	getline(cin,rep);
	getline(cin,pos);
	//cout<<pos<<endl;
	int rep_l=rep.length();
	//cout<<rep_l<<endl;
	int space=0;
	repi(i,rep_l)
	{
		if(rep[i]==' ')
			space++;
	}
	//vector<string> rep_arr[space+1];
	string rep_arr[space+1];
	int h=0;
	repi(i,rep_l)
	{
		string s="";
		for(int j=i;j<rep_l;j++)
		{
			if(rep[i]!=' ')
				{s=s+rep[i];i++;}
			else
				break;
		}
		//cout<<s<<endl;
		//rep_arr.push_back(s);
		rep_arr[h++]=s;
	}

	//repi(i,space+1)
	//cout<<rep_arr[i]<<" ";
	int pos_l=pos.length();
	//cout<<pos_l;
	int k=0;
	repi(i,pos_l-1)
	{
		if(pos[i]=='{' and pos[i+1]=='}')
		{
			cout<<rep_arr[k];
			k+=1;
			i++;
		}
		else if(pos[i]=='{' and pos[i+1]!='}')
		{
			int g=pos[i+1]-48;
			//cout<<g;
			cout<<rep_arr[g];
			i+=2;
		}
		else 
			cout<<pos[i];
	} 
	//int l=myvector.size();
	cout<<endl;
	return 0;

}