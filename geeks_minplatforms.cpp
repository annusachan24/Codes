//http://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MOD 1000000007 // 10**9 + 7
#define INF 1e9
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))
#define CLEAR(a) memset((a),0,sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define For(i, a, b) for (int i = a; i < b; i++)
#define Rfor(i, b, a) for (int i = b; i > a; i--)
#define all(v) v.begin(), v.end()
#define ll long long
#define repi(i,n) for(int i=0;i<n;i++)
#define repl(i,n) for(ll i=0;i<n;i++)


using namespace std;
const double pi = acos(-1.0);

int findPlatform(int arr[], int dep[], int n)
{
	int ans[n];
	//memset(ans,0,sizeof(ans));
	
	repi(i,n)
	{
		int cd=0;
		for(int j=0;j<i;j++)
		{
			if(arr[i]<dep[j])
				cd++;
		}
		ans[i]=cd;
	}
	repi(i,n)
	{
		int ca=0;
		for(int j=i+1;j<n;j++)
		{
			if(dep[i]>arr[j])
				ca++;
		}
		ans[i]+=ca;
		ans[i]+=1;//to count that train also
	}
	sort(ans,ans+n);
	//cout<<ans[n-1];
	return ans[n-1];
}	


int findPlatform1(int arr[], int dep[], int n)
{
	sort(arr,arr+n);
	sort(dep,dep+n);
	int i=1,j=0,pt=1,ans=1;
	while(i<n and j<n)
	{
		if (arr[i]<dep[j])
		{
			i++;
			pt++;
			if(ans<pt)
				ans=pt;
		}
		else
		{
			pt--;j++;
		}
	}
	return ans;

}

int main()
{
    //int arr[] = {900, 940, 950, 1100, 1500, 1800};
    //int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    //int n = sizeof(arr)/sizeof(arr[0]);
   // cout << "Minimum Number of Platforms Required = "
        // << findPlatform(arr, dep, n)<<endl;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n],dep[n];
		repi(i,n)
		cin>>arr[i];
		repi(i,n)
		cin>>dep[i];
    	cout<<findPlatform1(arr, dep, n)<<endl;
    }
    return 0;
}

