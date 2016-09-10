#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main()
{
	string s1,s2;

	cin>>s1>>s2;
	ll len1=s1.length();
	ll len2= s2.length();
	ll ans=0;
	for(ll i=0;i<len1;i++)
	{
		if(s1[i]==s2[0])
		{
			ll k=i;
			ll j;
			for(j=0;j<len2;j++)
			{
				if(s2[j]!=s1[k++])
					break;
			}
			if(j==len2)
				++ans;
		}
	}
	cout<<ans;
	return 0;
}