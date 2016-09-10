#include<iostream>
#include<stack>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	ll n,a;
	stack <ll> s;
	cin>>n;
	rep(i,n)
	{
		cin>>a;
		if(a!=0)
			s.push(a);
		else if(a==0 and !s.empty())
			s.pop();
	}
	ll l=s.size();
	ll c=0,k;
	rep(i,l)
	{
		k=s.top();
		c=c+k;
		s.pop();
	}
	cout<<c;
	return 0;

}