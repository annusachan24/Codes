#include<bits/stdc++.h>
typedef  long long int ll;
using namespace std;

int count_ones(ll n)
{
	int c=0;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		ll k=count_ones(n^p);
		cout<<k<<endl;

	}
}