#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long
#define rep(j,n) for(ll j=0;j<n;j++)

int piviot(ll a[],int start,int end)
{
	int i=start+1;
	int piv=a[start];
	for(int k=start+1;k<=end;k++)
	{
		if(a[k]>piv)
		{
			swap(a[k],a[i]);
			i++;
		}
	}
	swap(a[start],a[i-1]);
	return i-1;

}

void q_sort(ll a[],int start,int end)
{
	if(start<end)
	{
		int piv=piviot(a,start,end);
		q_sort(a,start,piv-1);//sort left half
		q_sort(a,piv+1,end);//sort right half
	}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		rep(j,n)
		cin>>a[j];

		q_sort(a,0,n-1);

		//for(int k=n-1;k>=0;k--)
		rep(j,n)
			cout<<a[j]<<" ";
		cout<<endl;
	}
							
}

