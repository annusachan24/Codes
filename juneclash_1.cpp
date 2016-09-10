#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for (ll i=0;i<n;i++)
using namespace std;

int parity(int a, int b)
{
	cout<<"a "<<a<<" b "<<b<<endl;
	int bb=(a%2==0 and b%2==0)or(a%2!=0 and b%2!=0);
	cout<<"gfh "<<bb<<endl;
	if(bb)
		return 1;
	else
		return 0;
}
ll dis(ll a1,ll a2, ll b1, ll b2)
{
	ll dist=abs(a1-a2)+abs(b1-b2)-2;
	cout<<"dis "<<dis<<endl;
	if(dist%2==0)
		return 1;
	else
		return 0;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll r[n], c[n], f[n];
		rep(i,n)
		{
			cin>>r[i]>>c[i]>>f[i];
		}
		if(n==1)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		int flag=1;
		rep(i,n)
		{
			for(ll j=i+1;j<n;j++)
			{
				if(dis(r[i],r[j],c[i],c[j])==1 and parity(f[i],f[j])==1)
					{
						cout<<"here"<<endl;
						flag=0;
						break;
					}
				else if(dis(r[i],r[j],c[i],c[j])==0 and parity(f[i],f[j])==0)
					{
						flag=0;
						break;
					}

			}
			if(flag==0)
					break;
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
return 0;
}