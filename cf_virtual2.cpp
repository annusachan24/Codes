//http://codeforces.com/contest/681/problem/C
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define st struct node

st 
{
	int data;
	st *next;
};

/* 
   1===== insert x — put the element with value x in the heap;
   2===== getMin x — the value of the minimum element contained in the heap was equal to x;
   3====== removeMin — the minimum element was extracted from the heap (only one instance, if there were many). 
    */
int main()
{
	ll n,x;
	cin>>n;
	ll ip[n][2];
	string s;
	rep(i,n)
	{
		cin>>s>>x;
		if(s=="insert")
		{
			ip[i][0]=1;
			ip[i][1]=x;
		}
		if(s=="getMin")
		{
			ip[i][0]=2;
			ip[i][1]=x;
		}
		if(s=="removeMin")
		{
			ip[i][0]=3;
			ip[i][1]=x;
		}

	}
	ll count=0;
	rep(i,n-2)
	{
		if(in[i][0]==1)
		{
			if(in[i+1][0]==2  and in[i+1][1]==in[i][0])
			{
				cout<<"insert "<<in[i][0]<<endl;
				cout<<"getMin "<<in[i][0]<<endl;
				i+=2;
				count+=2;
			}
			else if(in[i+1][0]==3)
			{
				cout<<"insert "<<in[i][0]<<endl;
				cout<<"removeMin "<<endl;
				i+=2;
				count+=2;
			}
			else
			{


			}

		}
	 
	}
	return 0;
}
