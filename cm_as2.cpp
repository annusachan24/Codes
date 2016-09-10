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
		//char s1[size];
		string s1="";
		//int k=0;
		for(int i=0;i<size;i++)
		{
			if(s[i]!=s[i+1])
				{
					//cout<<s[i]<<endl;
					s1=s1+s[i];
				}
		}
		//for(int i=0;s1[i]!='\0';i++)
		//cout<<s1[i];
		cout<<s1<<endl;
	}
	return 0;
}