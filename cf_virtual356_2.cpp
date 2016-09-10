#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	int a,n,max;
	cin>>n>>a;
	int r[n+1];
	r[0]=-1;
	for(int i=1;i<=n;i++)
	cin>>r[i];
	int sure=0;
	if(r[a]==1)
				sure++;
	int m1=n-a;
	if(m1>a)
		max=m1;
	else
		max=a;
	for(int i=1;i<=max;i++)
	{
			
			if(a-i>=1 and a+i<=n)
			{
				if(r[a-i]==1 and r[a+i]==1)
				{	sure+=2;
					//cout<<"q";
					//cout<<i;
				}
			}
			if(a-i>=1 and a+i>n)
			{
				if(r[a-i]==1)
					{
						sure++;
						//cout<<"w";
						//cout<<i;

					}
			}
			if(a-i<1 and a+i<=n)
			{
				if(r[a+i]==1)
				 {
				 	sure++;
					//cout<<"e";
					//cout<<i;
				}
			}

	}
 cout<<sure;
 return 0;
}