#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
/*
int countDistinct(int arr[], int n)
{
    // First sort the array so that all occurrences become consecutive
    sort(arr, arr + n);
    int c=0;
 
    // Traverse the sorted array
    for (int i=0; i<n; i++)
    {
       // Move the index ahead while there are duplicates
       while (i < n-1 && arr[i] == arr[i+1])
          i++;
		c++;
    }
    return c;
}
int alldiff(int a[], int n)
{
	int flag=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			flag=0;
			break;
		}
	}
	//cout<<"flag is "<<flag<<endl;
	return flag;
}

int cd(int a[], int n)
{
	int c=0;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			a[i]=-1;

	}
	for(int i=0;i<n;i++)
		if(a[i]!=-1)
			c++;
	return c;
}
int main()
{
	int n,ans;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	if(alldiff(a,n))
	{

		ans=countDistinct(a,n);
		cout<<ans-1;
	}
	else
	{
		ans=cd(a,n);
		cout<<ans;
	} 
	return 0;
} */

int n,x,ans=0;
int a[1005];
int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
	}
	
	while(1)
	{
		if(n==0)
			break;
		int c=0;
		for(int i=0;i<=1000;i++)
		{
			if(a[i])
			{
				c++;
				n--;
				a[i]--;
			}
		}
		ans=ans+(c-1);
	}
	cout<<ans;
	return 0;
}