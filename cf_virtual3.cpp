
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,a,b,c,n1,n2;
	cin>>n;
	n1=n/1234567;
	//n2=n/123456;
	int flag=0;
	rep(i,n1+1)
	{
		ll q=n-1234567*i;
		n2=q/123456;
		rep(j,n2+1)
		{
			ll w=q-123456*j;
			if(w%1234==0)
			{
				flag=1;
				break;
			}
			if(flag)
				break;
		}
	}

	if(flag)
	{
		cout<<"YES";

	}
	else
		cout<<"NO";
	return 0;
}