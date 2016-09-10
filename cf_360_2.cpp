#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string n;
	cin>>n;
	ll l=n.length();
	for(ll i=0;i<l;i++)
		cout<<n[i];
	for(ll i=l-1;i>=0;i--)
		cout<<n[i];
	return 0;

}