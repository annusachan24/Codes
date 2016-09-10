#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
using namespace std;
string shift_back(string s,int begin,int end)
{
	for(int i=begin;i<end-1;i++)
		s[i]=s[i+1];
	cout<<"string in fn is "<<s<<endl;
	return s;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		getline();
		int l=s.length();
		cout<<l;
		//for(int i;i<l-1;i++)
		int i=0;
		string k;
		while(s[i]!='/' and s[i+1]!='/' and i<l)
		{
			//if(s[i]=='/' and s[i+1]=='/')
				//break;
			//else if(s[i]=='-' and s[i+1]=='>')
			if (s[i]=='-' and s[i+1]=='>')
			{
				s[i]='.';
				cout<<"i and l are "<<i<<l<<endl;
				k=shift_back(s,i+1,l);
			}
			i++;

		}
		s.append(k);
		cout<<s<<endl;
	}
}


