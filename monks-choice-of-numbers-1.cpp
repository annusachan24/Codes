#include<bits/stdc++.h>
using namespace std;
int count_ones(int n)
{
	int c=0;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=count_ones(a[i]);
		}
		sort(b,b+n,greater<int>());
		//for(int i=0;i<n;i++)
			//cout<<b[i]<<" ";
		//cout<<endl;
		
	
		int count =0;
		for(int i=0;i<k;i++)
			count=count+b[i];
		cout<<count<<endl;
	}
	return 0;
}