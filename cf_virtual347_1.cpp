#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int time=0;
	if(a1==1 and a2==1)
		cout<<"0";
	else
	{
		while(a1!=0 and a2!=0)
		{
			//cout<<"time "<<time<<endl;	
			if(a1<a2)
			{
				a1+=1;
				a2-=2;
				time++;
			}
			else
			{
				a2+=1;
				a1-=2;
				time++;
			}

		}
		cout<<time;
	}
	return 0;
}

