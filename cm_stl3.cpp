#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n;
	cin>>n;
	pair <ll, string> p[n];
	ll k;
	string s;
	for(ll i=0;i<n;i++)
	{
		cin>>s>>k;
		p[i]=make_pair(-1*k,s);

	}
	sort(p,p+n);
	for(ll i=0;i<n;i++)
		cout<<p[i].second<<" "<<(-1*p[i].first)<<endl;
	return 0;
}