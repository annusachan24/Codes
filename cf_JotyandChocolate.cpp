#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n,a,b,p,q, ans1,ans2;
	cin>>n>>a>>b>>p>>q;
	
	
		ll nr=n, nb=n;
		ll arr[n];
		memset(arr, 0, sizeof(arr));
		
		ll rc=0, bc=0;
		ll v=1;
		while(nr>=a)	
		{
			arr[v*a -1]=1;
			rc++;
			//nr=nr/a;
			nr=nr-a;
			v++;
			//cout<<"nr is "<<nr<<endl;
			
		}
		//cout<<"red count is "<<rc<<endl;
		//for(ll i=0;i<n;i++)
			//cout<<arr[i]<<" ";
		//cout<<endl;
		ll t=1;
		while(nb>=b)
		{
			if(arr[t*b-1]==0)
				bc++;
			//nb=nb/b;
			nb-=b;
			t++;
			//cout<<"nb is "<<nb<<endl;
		}
		//cout<<"blue count is "<<bc<<endl;
		ans1=rc*p + bc*q;
		//cout<<"ans1 is "<<ans1<<endl;;
	
	
		ll nr1=n, nb1=n;
		ll arr1[n];
		memset(arr1, 0, sizeof(arr1));
		
		ll rc1=0, bc1=0;
		ll v1=1;
		while(nr1>=b)	
		{
			arr1[v1*b-1]=1;
			rc1++;
			//nr=nr/a;
			nr1=nr1-b;
			v1++;
			//cout<<"nr1 is "<<nr1<<endl;
			
		}
		//cout<<"blue count is "<<rc1<<endl;
		//for(ll i=0;i<n;i++)
		//	cout<<arr1[i]<<" ";
		//cout<<endl;
		ll t1=1;
		while(nb1>=a )
		{
			if(arr1[t1*a-1]==0)
				bc1++;
			//nb=nb/b;
			nb1-=a;
			t1++;
			//cout<<"nb1 is "<<nb1<<endl;
		}
		//cout<<"red count is "<<bc1<<endl;
		ans2=rc1*q + bc1*p;
		//cout<<"ans2 is "<<ans2<<endl;


	if(ans1>ans2)
		cout<<ans1;
	else
		cout<<ans2;

	return 0;

}