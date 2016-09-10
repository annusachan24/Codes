#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.length();
	    int a[26];
	    //memset(a,0,26);
	    for(int i=0;i<26;i++)
	    	a[i]=0;
	   /* for(int i=0;i<26;i++)
	    	cout<<a[i]<<" ";
	    cout<<endl;*/
	    for(int i=0;i<l;i++)
	    {
	        a[s[i]-97]++;
	    }
	    
	    int max=a[0],index;
	    /*for(int i=0;i<26;i++)
	    	cout<<a[i]<<" ";
	    cout<<endl;*/
	    for(int i=1;i<26;i++)
	    {
	        if(a[i]>max)
	       { max=a[i]; index=i;}
	    }
	    //cout<<index<<endl;
	    cout<<char(index+97)<<endl;
	}
	return 0;
}