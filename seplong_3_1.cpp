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

int total_nonzero(int a[],int n)
{
    int s=0;
    repi(i,n)
    {
        if(a[i]>0)
            s++;
    }

    return s;
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
    		ans[k]=make_pair(ci,k);
            int dist[6]={0};
            int type;
    		repi(i,ci)
    		{
                cin>>type;
                dist[type-1]++;
            }
            /*for(int i=0;i<6;i++)
                cout<<dist[i]<<" ";*/
           // cout<<endl;
            int tot_nonzero=total_nonzero(dist,6);
            while(tot_nonzero>=4)
            {
                switch(tot_nonzero)
                {
                    case 4: ans[k].first+=1;
                    break;
                    case 5: ans[k].first+=2;
                    break;
                    case 6: ans[k].first+=4;
                    break;
                }
                for(int i=0;i<6;i++)
                    dist[i]--;
                tot_nonzero=total_nonzero(dist,6);
            }
    		k++;
        }
        sort(ans,ans+n1);
       /* repi(i,n1)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;*/
        if(ans[n1-1].first==ans[n1-2].first)
            cout<<"tie"<<endl;
        else
        {
            if(ans[n1-1].second==0)
                cout<<"chef"<<endl;
            else
                cout<<ans[n1-1].second+1<<endl;
        }
    
    		
    }
    return 0;
}