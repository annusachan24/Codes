#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=1;i<=n;i++)

int main()
{
	ll n1,m1,n,m;
	cin>>n1>>m1;
	if(m1<n1)// put min into m and max into n
	{
		m=m1;
		n=n1;
	}
	else
	{
		m=n1;
		n=m1;
	}
	//cout<<"min is "<<m<<" max is "<<n<<endl;
	ll c=0;
	if(m+n<5)
		cout<<"0";
	else
	{


	rep(i,m)
	{
		if(i%5==1)
		{
			c=c+1+(n-4)/5;
			cout<<"1 c is "<<c<<endl;
		}
		if(i%5==2)
		{
			c=c+1+(n-3)/5;
			cout<<"2 c is "<<c<<endl;
		}
		if(i%5==3)
		{
			c=c+1+(n-2)/5;
			cout<<"3 c is "<<c<<endl;
		}
		if(i%5==4)
		{
			c=c+1+(n-1)/5;
			cout<<"4 c is "<<c<<endl;
		}
		if(i%5==0)
		{
			c=c+n/5;
			cout<<"5 c is "<<c<<endl;
		}
	}
	cout<<c;
	}
	return 0;

}