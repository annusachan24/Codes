//#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		int t=s[i];
		if(t<=90 and t>=65)
			s[i]=s[i]+32;
		else
			s[i]=s[i]-32;
	}
	cout<<s<<endl;
	return 0;
}