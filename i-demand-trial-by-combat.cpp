//https://www.hackerearth.com/problem/algorithm/i-demand-trial-by-combat-13/
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		int temp;
		cin>>n>>m;
		vector <int> v;
		rep(i,n)
		{
			cin>>temp;
			v.push_back(temp);
		}
		

		bool flag=true;
		rep(i,n-1)
		{
			if(v[i]!=v[i+1])
			{
				flag=false;
				//cout<<"i came here "<<endl;
				break;
			}
		}
		//cout<<"flag is "<<flag<<endl;
		if(flag)
		{
			//cout<<"printing from loop 1 "<<endl;
			rep(i,n)
			cout<<v[i]<<" ";
			cout<<endl;
		}
		else
		{


			rep(i,m)
			{
				vector <int> a;
				if(v[1])
					a.push_back(1);
				else
					a.push_back(0);

				for(int j=1;j<n-1;j++)
				{
					if(v[j-1] and v[j+1])
						a.push_back(1);
					else
						a.push_back(0);

				}

				if(v[n-2])
					a.push_back(1);
				else
					a.push_back(0);



				v=a;
				/*cout<<" v after "<<i<<"th iteration is"<<endl;
				rep(i,n)
				cout<<v[i]<<" ";
				cout<<endl;*/


			}
			rep(i,n)
			cout<<v[i]<<" ";
			cout<<endl;
		}
	}

}