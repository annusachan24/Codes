#include<iostream>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n, m;
		cin>>n>>m;
		ll a[n],b[m];
		rep(i,n)
		cin>>a[i];
		rep(i,m)
		cin>>b[i];

		ll p=0,q=0;;
		ll c[n+m];
		ll k=0;
		//while(p<=n and q<=m)
		rep(i,n+m)
		{
			 if(p>=n)
			{

				c[i]=b[q++];
				//cout<<"3rd "<<c[i]<<endl;
			}
			else if(q>=m)
			{
				c[i]=a[p++];
				//cout<<"4th "<<c[i]<<endl;
			}

			else if(a[p]>=b[q])
			{
				c[i]=a[p++];
				//cout<<"1st "<<c[i]<<endl;
			}
			else if (a[p]<b[q])
			{
				c[i]=b[q++];
				//cout<<"2nd "<<c[i]<<endl;
			}


		}
		rep(i,n+m)
		cout<<c[i]<<" ";
		cout<<endl;

	}
	return 0;
}