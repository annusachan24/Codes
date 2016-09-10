//find the lcs and print it also
#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n)
{
	int l[m+1][n+1];

	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 or j==0)
				l[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				l[i][j]=1+l[i-1][j-1];
			else
				l[i][j]=max(l[i-1][j],l[i][j-1]);
		}
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<l[i][j]<<" ";
		}
		cout<<endl;
	}
	int index=l[m][n];
	char lcseq[index+1];
	int i=m,j=n;
	while(i>0 and j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			lcseq[index-1]=s1[i-1];
			i--;
			j--;
			index--;
		}
		else
		{
			if(l[i-1][j]>l[i][j-1])
				i--;
			else
				j--;
		}
	}
	cout<<"lcs of "<<s1<<" and "<<s2<<" is "<<lcseq<<endl;
	return l[m][n];

}

int main()
{
	string s1, s2;
	cin>>s1>>s2;
	int m=s1.length();
	int n=s2.length();
	cout<<m<<" "<<n<<endl;
	cout<<"length of lcs is "<<lcs(s1,s2,m,n)<<endl;
	return 0;
}