//revise the concept
//https://www.hackerearth.com/code-monk-searching/algorithm/the-old-monk/
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
int main()
{
	int t; 
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],b[n];
		rep(i,n)
		cin>>a[i];
		rep(i,n)
		cin>>b[i];
		ll ans=0;
		rep(i,n)
		{
			
			ll p=-1;
			ll l=0,h=n-1,m;
			while(l<=h)
			{
				m=(l+h)/2;
				if(b[m]>=a[i])
				{
					p=m;
					l=m+1;
				}
				else
					h=m-1;
			}
			ans=max(ans,p-i);
		}

		cout<<ans<<endl;
	}
	return 0;
}


