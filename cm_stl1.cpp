//set ka exclusive use, all else give tle
//find() only in set logn

#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define rep(i,n) for(i=0;i<n;i++)

int main()
{
  
  int t;
  cin>>t;
  while(t--)
  {
    int i,j,n,m;
    cin>>n>>m;
    
    vector<ll int>v(n+m);
    rep(i,n+m)
    {
    cin>>v[i];
    
    }

    set<ll int>mys;
    
    rep(i,n)
      mys.insert(v[i]);
    
   /* for(it = mys.begin();it != mys.end();++it)
        cout << *it << ' ';
    cout<<endl; */

    for(i=n;i<n+m;i++)
    {
      if(mys.find(v[i])!=mys.end())
        cout<<"YES\n";
      else
        cout<<"NO\n";
      mys.insert(v[i]);
    }
    
  }

  return 0;
}