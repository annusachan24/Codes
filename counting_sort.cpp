#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define range 10
int main()
{
	int n;
	cin>>n;
	int a[n];
	rep(i,n)
	cin>>a[i];
	//int range=9;//assuming the range in which nos are is 0 to 9
	int count[10];
	rep(i,range)
	count[i]=0;
	rep(i,n)
	{
		count[a[i]]++;
	}
	rep(i,range)
	cout<<count[i]<<" ";
	cout<<endl;
	int c[10];
	c[0]=count[0];
	for(int i=1;i<range;i++)
		c[i]=c[i-1]+count[i];
	rep(i,range)
	cout<<c[i]<<" ";
	cout<<endl;

	int output[n];
	//for(int i=0;a[i];i++)
	rep(i,n)
	{
		output[c[a[i]]-1]=a[i];
		--c[a[i]];
	}
	rep(i,n)
	cout<<output[i]<<" ";
	cout<<endl;
	return 0;
}