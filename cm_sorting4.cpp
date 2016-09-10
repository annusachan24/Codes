#include<iostream>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)


int ele(int a[],int n)
{
	int m=a[0],index;
	rep(i,n)
	{
		if(a[i]<=m)
		{
			m=a[i];
			index=i;
		}
	}
	return index;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,cost=0;
		cin>>n>>k;
		int a[n][n];
		rep(i,n)
			rep(j,n)
				cin>>a[i][j];

		int r[n],c[n];
		rep(i,n)
		{
			int s1=0,s2=0;
			rep(j,n)
			{
				s1=s1+a[i][j];
				s2=s2+a[j][i];
			}
			r[i]=s1;
			c[i]=s2;
		}

		/*rep(i,n)
			cout<<r[i]<<" ";
		cout<<endl;
		rep(i,n)
			cout<<c[i]<<" ";
		cout<<endl;*/
		
		rep(i,k)
		{
			int rm=ele(r,n);
			int cm=ele(c,n);
			if(r[rm]<=c[cm])
			{
				cost+=r[rm];
				r[rm]+=n;
				rep(j,n)
				c[j]++;
			}
			else
			{
				cost+=c[cm];
				c[cm]+=n;
				rep(j,n)
				r[j]++;

			}
		}
		cout<<cost<<endl;

	}


	return 0;
}