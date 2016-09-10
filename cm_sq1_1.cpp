#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)


int main()
{
	int n,k,count=0,j,m=0;
	cin>>n;
	int ideal[n];
	queue <int> c;
	
	rep(i,n)
	{
		cin>>k;
		c.push(k);
	}
	rep(i,n)
	cin>>ideal[i];

	while(m<n)
	{
		if(ideal[m]==c.front())
		{
			c.pop();
			count++;
			m++;
		}
		else
		{
			j=c.front();
			c.pop();
			c.push(j);
			count++;
		}

	}
	cout<<count;

	return 0;

}