#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <limits.h>
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

int count_distinct(int arr[], int n)
{
	int c=0;
    
    for (int i=0; i<n; i++)
    {
        
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j)
          c++;
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int n1=n;
    	pair<int,int> ans[n];//value index
    	int k=0;
    	
    	while(n--)
    	{
    		int ci;
    		cin>>ci;
    		//cout<<"ci taken"<<endl;
    		int a[ci];
    		//ans[k]=ci;
    		ans[k]=make_pair(ci,k);
    		repi(i,ci)
    		cin>>a[i];
    		//cout<<"a[i] taken"<<endl;
    		int distinct=count_distinct(a,ci);
    		//cout<<"distinct is "<<distinct<<endl;
    		switch(distinct)
    		{
    			case 4: ans[k].first+=1;
    			break;
    			case 5: ans[k].first+=2;
    			break;
    			case 6: ans[k].first+=4;
    			break;
    		}
    		k++;
    		//cout<<" k is "<<k<<endl;
    	}
    	/*cout<<"\nprinting the ans[i] array "<<endl;
    	repi(i,n1)
    	cout<<ans[i]<<" ";
    	cout<<endl;*/
    	int max=INT_MIN;
    	int index;
    	int flag=-1;
    	for(int i=0;i<n1;i++)
    	{
    		if(ans[i]>=max)
    		{
    			flag++;
    			max=ans[i];
    			index=i;
    		}
    	}
    	cout<<"flag is "<<flag<<endl;
   
    	if(flag<=1)
    	{
    		if(index==0)
    			cout<<"chef"<<endl;
    		else
    			cout<<index+1<<endl;
    	}
    	else
    		cout<<"tie"<<endl;
    }
    return 0;
}