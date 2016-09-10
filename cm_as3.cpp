#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		ll sum=a[0],s=0;
		int flag=0;
		for(ll i=1;i<=n;i++)
		{
			while(sum > x and s<i-1)
			{
				sum=sum-a[s];
				s++;
			}
			if(sum==x)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
					
			if(i<n)
				sum=sum+a[i];
			
			
		}
		if(!flag)
			cout<<"NO"<<endl;
		


	}
	return 0;
}