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
//http://codeforces.com/contest/709/problem/B

ll findCrossOver(ll arr[], ll low, ll high, ll x)
{
  // Base cases
  if (arr[high] <= x) // x is greater than all
    return high;
  if (arr[low] > x)  // x is smaller than all
    return low;
 
  // Find the middle point
  ll mid = (low + high)/2;  /* low + (high - low)/2 */
 
  /* If x is same as middle element, then return mid */
  if (arr[mid] <= x && arr[mid+1] > x)
    return mid;
 
  /* If x is greater than arr[mid], then either arr[mid + 1]
    is ceiling of x or ceiling lies in arr[mid+1...high] */
  if(arr[mid] < x)
      return findCrossOver(arr, mid+1, high, x);
 
  return findCrossOver(arr, low, mid - 1, x);
}
int main()
{
	ll n,a;
	cin>>n>>a;
	ll arr[n];
	ll visited[n];
	repl(i,n)
	visited[i]=0;
	repl(i,n)
	cin>>arr[i];
	ll k=0;
	ll dis=0;
	ll x,i;
	while(k!=n-1)
	{
		i=findCrossOver(arr,0,n-1,a);
		cout<<"crosover point is "<<i<<endl;
		x=arr[i];
		if(visited[i]==0)
		{
			cout<<"here a is "<<a<<endl;
			dis+=abs(a-x);
			visited[i]=1;
			a=x;
		}
		k++;
	}
	cout<<dis;
	return 0;
}