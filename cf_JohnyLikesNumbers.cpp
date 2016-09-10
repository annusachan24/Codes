#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,k,t,s;
	cin>>n>>k;
	if(k>n)
		cout<<k;
	else if(k==1)
		cout<<n+1;

	else
	{
		s=n/k;
		cout<<(s+1)*k;
	}
	return 0;
	
}