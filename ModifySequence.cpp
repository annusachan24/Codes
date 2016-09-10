//https://www.hackerearth.com/problem/algorithm/modify-sequence/
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)


int main()
{
	int n;
	cin>>n;
	int a[n];
	rep(i,n)
	cin>>a[i];
	int p=1;

	rep(i,n-1)
	{
		if(a[i]>a[i+1])
		{
			p=0;
			break;
		}
		else
		{
			a[i+1]-=a[i];
			a[i]=0;
			cout<<a[i]<<" "<<a[i+1]<<endl;
		}
	}
	if(p==0)
		cout<<"NO";
	else if(a[n-1]!=0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
