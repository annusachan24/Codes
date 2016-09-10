//implementation of sets
//set of string
//see strings can be used this way as well

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		set<string >s;
		string str;
		for(ll i=0;i<n;i++)
		{
			cin>>str;
			s.insert(str);

		}
		set <string>::iterator it;
		for(it = s.begin();it != s.end();++it)
        cout << *it <<endl;


	}
}