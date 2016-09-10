#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t,cost,q;
	cin>>t;
	stack <ll> s;

	while(t--)
	{
		cin>>q;
		if(q==2)
		{
			cin>>cost;
			s.push(cost);

		}
		if(q==1)
		{
			if(!s.empty())
			{
				cout<<s.top()<<endl;
				s.pop();
			}
			else
				cout<<"No Food"<<endl;
		}
	}
}