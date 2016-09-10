//binary search logn

#include<bits/stdc++.h>
using namespace std;
 

#define ll long long 
#define rep(i,n) for(ll i=0;i<n;i++)
#define elif else if
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
//#define pn        printf("\n")

int main()
{
	ll t,n,m,g,h;
	sl(t);
	while(t--)
	{
		ll n,m,g,h,a,b;
		cin>>n>>m;
		
		vector<ll > sc,pc,sn,pn;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
			sc.push_back(a);
			pc.push_back(b);

		}
		for(ll i=0;i<m;i++)
		{
			cin>>a>>b;
			sn.push_back(a);
			pn.push_back(b);

		}
		cin>>g>>h;
		ll gg=0,hh=0;

		rep(i,m)
		//for(ll i=0;i<m;i++)
		{
				if(binary_search(sc.begin(),sc.end(),sn[i]))
				{
					gg++;
					if(binary_search(pc.begin(),pc.end(),pn[i]))
						hh++;
				}
		}
		if(gg==g and hh==h)
			cout<<"Great"<<endl;
		else if(gg==g and hh!=h)
			cout<<"Good"<<endl;
		else
			cout<<":("<<endl;


	}
	return 0;
}