#include<iostream>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	rep(i,n)
	cin>>a[i];
	ll ans=1;
	ll m=1000000000+7;
	cout<<"modulo is "<<m<<endl;
	rep(i,n)
	{
		ans=(ans*a[i])%m;
		cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}