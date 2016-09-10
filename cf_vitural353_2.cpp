#include <bits/stdc++.h>
using namespace std;
#define ll long long

int qwe(ll k,ll n)
{
	if(k>=1 and k<=n)
		return 1;
	else
		return 0;
}

int main()
{
	ll n,a,b,c,d,q,r,s,t;
	ll tc=0;
	cin>>n>>a>>b>>c>>d;
	for(ll i=1;i<=n;i++)
	{
		q=i+b-c;
		s=i+a-d;
		t=i+a+b-c-d;
		if(qwe(q,n) and qwe(s,n) and qwe(t,n))
			tc++;
	}
	cout<<tc*n;
}