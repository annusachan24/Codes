#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int eq(int s1,int s2, int s3)
{
	if(s1==s2 and s2==s3)
		return 1;
	else
		return 0;
}
int main()
{
	int l1,l2,l3;
	cin>>l1>>l2>>l3;
	int a1[l1],a2[l2],a3[l3];
	int s1=0;
	int s2=0;
	int s3=0;
	rep(i,l1)
	{
		cin>>a1[i];
		s1=s1+a1[i];
	}
	rep(i,l2)
	{
		cin>>a2[i];
		s2=s2+a2[i];
	}

	rep(i,l3)
	{
		cin>>a3[i];
		s3=s3+a3[i];
	}
	//cout<<s1<<s2<<s3;
	if(s1==s2 and s2==s3)
		cout<<s1;
	else
	{
		while(eq(s1,s2,s3))
		{
			
		}
	}
	return 0;
	

}