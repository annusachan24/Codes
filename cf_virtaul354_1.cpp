#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	//for(int i=0;i<n;i++)
		//cout<<a[i]<<" ";
	int max=a[0];
	int m=0;
	for(int i=1;i<n;i++)
	{

		if(a[i]>max)
		{
			max=a[i];
			//cout<<max<<endl;
			m=i;
		}
		
	}
	//cout<<"location of max is "<<m<<endl;
	int ans1;
	if(n-1-m>m)
		ans1=n-1-m;
	else
		ans1=m;
	//cout<<"ans1 "<<ans1<<endl;

	int ans2;
	int min=a[0];
	int k=0;

	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			//cout<<min<<endl;
			k=i;
		}
		//cout<<"kkkkk "<<k<<endl;
	}
	//out<<"location of min is "<<k<<endl;
	//int ans1;
	if(n-1-k>k)
		ans2=n-1-k;
	else
		ans2=k;
	//cout<<"ans2 "<<ans2<<endl;

	if(ans1>ans2)
		cout<<ans1;
	else
		cout<<ans2;
	return 0;
}

