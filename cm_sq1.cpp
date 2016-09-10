//WA why??????
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{

	ll n,k,j;
	cin>>n;
	stack <ll> s;
	ll a[n] ,c[n];
	rep(i,n)
	{
		cin>>c[i];
		
	}
	rep(i,n)
	cin>>a[i];

	/*rep(i,n)
	cout<<c[i];
	cout<<endl;
	rep(i,n)
	cout<<a[i];
	cout<<endl;
	*/
	j=0;
	ll count=0;
	rep(i,n)
	{
		if(c[i]!=a[j] and c[i]!=0)
		{
			count++;
			s.push(c[i]);
			c[i]=0;
		}
		else
		{
			count++;
			c[i]=0;
			j++;
		}
	}
	cout<<(count+s.size()); 

	return 0;

} 