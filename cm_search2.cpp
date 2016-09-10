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
		ll a,b,c,k;
		cin>>a>>b>>c>>k;
		ll n=100000;
		/*Now when we take a look at the constraints of K, which is 10 10, in the worst case possible, our answer 
		will not be greater than 105 anyway. So that will be our upper limit for searching. The lower limit for our 
		searching will be 0.*/
		ll l=0,h=n-1,ans,m;
		while(l<=h)
		{
			m=(l+h)/2;
			ll v=a*m*m+b*m+c;
			if(v>=k)
			{
				ans=m;
				h=m-1;
			}
			else
				l=m+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}