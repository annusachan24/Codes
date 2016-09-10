//https://www.hackerearth.com/problem/algorithm/containers-of-choclates-1/

#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)


int root(int arr[],int i)
{
	while(arr[i]!=i)
	{
		i=arr[i];
	}
	return i;
}

bool find(int arr[],int a,int b)
{
	if(root(arr,a)==root(arr,b))
		return true;
	else
		return false;
}

void wt_union(int arr[],int size[],int a,int b)
{
	int root_a=root(arr,a);
	int root_b=root(arr,b);
	if(size[root_a]<size[root_b])
	{
		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
	}
	else
	{
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];
	}
	
}

int main()
{
	int n,k,a,b,root_a,root_b;
	cin>>n>>k;
	int arr[n],size[n];
	rep(i,n)
	{
		arr[i]=i;
		size[i]=1;
	}
	
	while(k--)
	{
		cin>>a>>b;
	
		if(find(arr,a,b))
		{
			wt_union(arr,size,a,b);
		}

	}
	int count=0;
	rep(i,n)
	{
		if(size[i]==1)
			count++;
	}

	cout<<count<<endl;
	return 0;
}

