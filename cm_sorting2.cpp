#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define rep(i,n) for (ll i =0;i<n;i++)

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		ll* it;
		cin>>n;

		ll a[n],b[n];
		rep(i,n)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		
		rep(i,n)
		{
			it=find(b,b+n,a[i]);
			k=it-b;
			//cout<<"k is "<<k;
			//cout<<endl;
			if (n==1)
				cout<<"0";
			else if(k-i>0)
				cout<<(k-i)<<" ";
			else
				cout<<"0 ";

		}
		cout<<endl;


	}

}