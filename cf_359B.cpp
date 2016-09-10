#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int isndo(ll a[], int n)
{
	ll i;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i]){}

		else
			break;
	}
	if(i==n-1)
		return 1;
	else
		return 0;
}

void printarr(ll a[], ll n)
{
	rep(i,n)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	ll n,r,l,temp;
	cin>>n;
	ll a[n];
	rep(i,n)
	cin>>a[i];
	ll i;
	while(!isndo(a,n))
	{
		for(ll i=0;i<n;i++)
		{
			ll k=i;
			//ll i=0;
			bool flag=false;
			while(a[i]>a[i+1] and i+1<n)
			{
				r=k;
				l=i+1;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				i=i+2;
				flag=true;
			}
			
			if(flag)
			{
				//printarr(a,n);
				cout<<r+1<<" "<<l+1<<endl;
			}
			
		}
	}
}