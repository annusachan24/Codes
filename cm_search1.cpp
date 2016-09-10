#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)

bool binary_search(ll a[],ll left,ll right, ll item)
{	
	ll mid=left+(right-left)/2;
	if(left<=right)
	{
		if(a[mid]==item)
			return true;
		else if(a[mid]>item)
			return binary_search(a,left,mid-1,item);
		else
			return binary_search(a,mid+1,right,item);

	}
	else 
		return false;

}

int main()
{
	ll n,q;
	cin>>n>>q;
	ll a[n];
	rep(i,n)
		cin>>a[i];
	sort(a,a+n);
	ll b[q];
	rep(i,q)
		cin>>b[i];

	rep(i,n)
	cout<<a[i]<<" ";
	cout<<endl;
	/*rep(i,q)
	cout<<b[i]<<" ";
	cout<<endl; */
	bool flag;
	rep(i,q)
	{
		flag=binary_search(a,0,n-1,b[i]);
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}