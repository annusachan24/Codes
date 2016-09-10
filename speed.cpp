#include<iostream>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		rep(i,n)
		cin>>a[i];

		ll c=1;
		for(ll i=1;i<n;i++)
		{
			int flag = 1;
			for(ll j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					flag=0;break;
				}
			}

			if(flag)
				c++;
		}
		cout<<c<<endl;

	}
}
