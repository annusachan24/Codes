#include<iostream>
#include<string>
#include<stack>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	int m;
	cin>>m;
	int c=0;
	while(m--)
	{
		string a;
		cin>>a;
		int l=a.size();
		if(l%2==0)
		{


			stack <int> s;
			s.push(a[0]);
			
			int pc=0;
			for(int i=1;i<l;i++)
			{
				if(!s.empty() and a[i]==s.top())
				{
					pc++;
					s.pop();
				}
				else
					s.push(a[i]);

			}
			//cout<<"length is "<<l<<endl;
			//cout<<"pc is "<<pc<<endl;
			if(pc==l/2)
				c++;
		}
	}
	cout<<c;
	return 0;
}