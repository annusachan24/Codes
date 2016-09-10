#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define re(i,n) for(ll i=0;i<n;i++)

int sum(int a[])
{
	int s=0;
	for(int i=0;i<5;i++)
		s=s+a[i];
	return s;
}
void print(int a[])
{
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int a[5],b[5],s=0;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int s1,s2;
	sort(a,a+5);
	sort(b,b+5);
	for(int i=0;i<2;i++)
	{
		if(a[i]==a[i+1] and a[i+1]==a[i+2])
		{
			a[i]=0;
			a[i+1]=0;
			a[i+2]=0;
			break;
		}
		else if(a[i]==a[i+1])
		{
			a[i]=0;
			a[i+1]=0;
			break;
		}
	}
	s1=sum(a);
	//print(a);
	for(int i=4;i>=2;i--)
	{
		if(b[i]==b[i-1] and b[i-1]==b[i-2])
		{
			b[i]=0;
			b[i-1]=0;
			b[i-2]=0;
			break;
		}
		else if(b[i]==b[i-1])
		{
			b[i]=0;
			b[i-1]=0;
			break;
		}
	}
	s2=sum(b);
	//print(b);
	if(s1<s2)
		cout<<s1;
	else
		cout<<s2;
	return 0;
}
