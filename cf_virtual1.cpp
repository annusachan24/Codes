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
	int t;
	cin>>t;
	string s[t];
	int b[t],a[t];
	int flag=0;
	for(int i =0;i<t;i++)
	{	
		cin>>s[i]>>b[i]>>a[i];

	}
	for(int i =0;i<t;i++)
	{
		if(b[i]>=2400 and a[i]>b[i])
		{
			flag=1;
			break;
		}

	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;

}
