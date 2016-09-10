//https://www.hackerearth.com/problem/algorithm/dfs-2/
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

bool iterative_binary_search(ll a[], ll n, ll item)
{
	ll low=0, high=n-1, mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(item==a[mid])
			return true;
		else if(item<=a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return false;

}

ll first_occurence(ll a[], ll low, ll high, ll item)
{
	//ll low=0, high=n-1, mid;
	ll mid;
	//cout<<"g";
	while(high-low>1)
	{
		mid=low + (high-low)/2;
		if(a[mid]>=item)
			high=mid;
		else
			low=mid;

	}
	return high;
	
}

ll last_occurence(ll a[], ll n, ll item)
{
	ll low=0, high=n-1, mid;
	while(high-low>1)
	{
		mid=low + (high-low)/2;
		if(a[mid]<=item)
			low=mid;
		else
			high=mid;
		
	}
	return low;
	

}


int main()
{
	ll n;
	cin>>n;
	ll a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	/*if(iterative_binary_search(a,n,4))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl; */
	
	//ll f=first_occurence(a,0,n-1,2);
	//cout<<f;
	cout<<"first_occurence is "<<first_occurence(a,0,n-1,2)<<endl;
	cout<<"last_occurence is "<<last_occurence(a,n,2)<<endl;

	return 0;

}

