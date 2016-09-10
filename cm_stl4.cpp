#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,s=0,a,m;
		cin>>n>>k;
		//std::vector<ll> v;
		priority_queue<ll> pq;
		for(ll i=0;i<n;i++)
		{
			cin>>a;
			pq.push(a);

		}
		
		for(ll i=0;i<k;i++)
		{
			m=pq.top();
			pq.pop();
			s=s+m;

			pq.push(floor(m/2));
			
		}
		cout<<s<<endl;
	
	}
	return 0;
}