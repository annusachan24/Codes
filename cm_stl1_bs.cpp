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
#define pn        printf("\n")

int main()
{
	int t;
	si(t);
	while(t--)
	{
		vector<ll >a,b;
		ll n,m;
		cin>>n>>m;
		ll k;
		rep(i,n+m)
		{
			cin>>k;
			a.push_back(k);
			
		}
		rep(i,n)
      	b.push_back(a[i]);
      	sort(b.begin(),b.end());

      	for(ll i=n;i<n+m;i++)
      	{
      		if(binary_search(b.begin(),b.end(),a[i]))
      			cout<<"YES"<<endl;
      		else
      			cout<<"NO"<<endl;
      		b.push_back(a[i]);
      		sort(b.begin(),b.end());
      	}

	}
}