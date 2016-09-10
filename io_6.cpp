#include<iostream>
using namespace std;

#define ll long long 
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	int l,r,k;
	cin>>l>>r>>k;
	int c=0;
	for(i=l;i<=r;i++)
	{
		if(i%k==0)
			c++;
	}
	cout<<c;
	return 0;
}