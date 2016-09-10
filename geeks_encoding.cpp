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
/*
char *encode(char *src)
{
	int alph[26];
	for(int i=0;i<26;i++)
		alph[i]=0;
	int l=0;
	//while(src[l++]!='\0');
	l=strlen(src);
	cout<<"length is "<<l<<endl;
	for(int i=0;i<l;i++)
	{
		if(src[i]-97>=0 and src[i]-97<=25)
		alph[src[i]-97]++;
	}
	for(int i=0;i<26;i++)
		cout<<alph[i]<<" ";
	char *ans;
	int j=0;
	for(int i=0;i<26;i++)
	{

		if(alph[i]!=0)
			{array count[] 
   
				ans[j++]=char(i+97);
				ans[j++]=alph[i];
			}
	}
	return ans;
}
*/
char *encode(char *src)
{     
  int i,j=0;
  int l=0;
  char *ans=new char[100];
  //cout<<"here "<<endl;
 // cout<<src<<endl;
  while(src[l++]!='\0');
  //int l=strlen(src);

  //cout<<"length of string is "<<l<<endl;
  for(i=0;i<l;i++)
  {
  	//cout<<"wfigigiwi"<<endl;
      int k=0;
      char c=src[i];
      while(src[i]==c)
      {
      	 //cout<<src[i]<<"  "<<c<<endl;
         // cout<<i<<"  "<<k<<endl;

          k++;
          i++;
          
               }
      
      ans[j++]=src[i-1];
      //cout<<ans[j-1]<<"  ";
      ans[j++]=k+48;
      //cout<<ans[j-1]<<endl;
      i--;
      
  }
  //cout<<ans<<endl;
  return ans;
  
} 

int main()
{
	char *src;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>src;
		char *ans=encode(src);
		cout<<ans<<endl;
	}
	return 0;
}    
 
