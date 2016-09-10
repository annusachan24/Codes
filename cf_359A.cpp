#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	char s[n];
	rep(i,n)
	{
		cin>>s[i];
		cin>>a[i];
	}
	//ll i_left=0;
	ll count=0;
	rep(i,n)
	{
		if(s[i]=='+')
			x=x+a[i];
		else if(s[i]=='-')
		{
			if(x-a[i]<0)
			{
				count++;
			}
			else
				x=x-a[i];
		}
	}
	cout<<x<<" "<<count;
	return 0;

}