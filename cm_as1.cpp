#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int size=s.size();
		char s1[size];
		for(int i=size-1;i>=0;i--)
		{
			cout<<s[i];
			//s1[size-i]=s[i];
		}
		cout<<endl;
	}
	return 0;
	
}