#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MOD 1000000007 // 10**9 + 7
#define INF 1e9
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))
#define CLEAR(a) memset((a),0,sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define For(i, a, b) for (int i = a; i < b; i++)
#define Rfor(i, b, a) for (int i = b; i > a; i--)
#define all(v) v.begin(), v.end()
#define ll long long
#define repi(i,n) for(int i=0;i<n;i++)
#define repl(i,n) for(ll i=0;i<n;i++)


using namespace std;
const double pi = acos(-1.0);

int main()
{
	int n;
	cin>>n;
	int row,col;
	ll a[n][n];
	ll number;

	repi(i,n)
	{
		repi(j,n)
		{
			cin>>number;
			if(number==0)
			{
				row=i;
				col=j;
			}
			a[i][j]=number;
		}
	}
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	
	
	if((row+col!=n-1) and (row!=col))
	{
		ll rowsum[n-1];
		ll colsum[n-1];
		ll emptysum=0;
		//memset(rowsum,0,sizeof(rowsum));
		//memset(colsum,0,sizeof(colsum));
		for(int i=0;i<n-1;i++)
		{
			rowsum[i]=0;
			colsum[i]=0;
		}

		repi(i,n)
		{

			repi(j,n)
			{
				if(i==row)
				{
					emptysum+=a[i][j];
					//cout<<"empty sum "<<emptysum<<endl;
				}

			}
			
		}

		int k=0;
		repi(i,n)
		{
			if(i!=row)
			{
				repi(j,n)
				{
					rowsum[k]+=a[i][j];
				}
				k++;
			}
			
		}

		int m=0;

		repi(i,n)
		{
			repi(j,n)
			{
				if(i!=col)
				{
					//cout<<a[j][i]<<" ";
					colsum[m]+=a[j][i];
				
				}
				//cout<<endl;
				
			}
			
			if(i!=col)
			{
				//cout<<"m is "<<m<<endl;
				m++;
				
			}
			
			
		}

		//cout<<"final empty sum is "<<emptysum<<endl;

		/*repi(i,n-1)
		{
			cout<<i<<" row sum is "<<rowsum[i]<<endl;
			cout<<i<<" col sum is "<<colsum[i]<<endl;
		}*/

		ll pdia=0, sdia=0;

		repi(i,n)
		{
			repi(j,n)
			{
				if(i==j)
					pdia+=a[i][j];
				if(i+j==n-1)
					sdia+=a[i][j];
			}
		}

		//cout<<"principal diagonal sum is "<<pdia<<endl;
		//cout<<"secondary diagonal sum is "<<sdia<<endl;


		int flag=1;

		repi(i,n-2)
		{
			if(rowsum[i]!=rowsum[i+1] and rowsum[i]!=pdia and rowsum[i]!=sdia and rowsum[i+1]!=pdia and rowsum[i+1]!=sdia )
			//if(rowsum[i]!=rowsum[i+1])
			{
				//cout<<"rows sum is invalid "<<endl;
				flag=0;
				break;
			}
			if(colsum[i]!=colsum[i+1] and colsum[i]!=pdia and colsum[i]!=sdia and colsum[i+1]!=pdia and colsum[i+1]!=sdia )
			{
				flag=0;
				break;
			}
		}

		if (flag)
		{
			//cout<<"1"<<endl;
			cout<<rowsum[0]-emptysum;
			return 0;
		}

	}

	//the empty element lies in one of the diagonals

	else
	{
		ll rowsum[n-1];
		ll colsum[n-1];
		ll emptysum=0;
		//memset(rowsum,0,sizeof(rowsum));
		//memset(colsum,0,sizeof(colsum));
		for(int i=0;i<n-1;i++)
		{
			rowsum[i]=0;
			colsum[i]=0;
		}

		repi(i,n)
		{

			repi(j,n)
			{
				if(i==row)
				{
					emptysum+=a[i][j];
					//cout<<"empty sum "<<emptysum<<endl;
				}

			}
			
		}

		int k=0;
		repi(i,n)
		{
			if(i!=row)
			{
				repi(j,n)
				{
					rowsum[k]+=a[i][j];
				}
				k++;
			}
			
		}

		int m=0;

		repi(i,n)
		{
			repi(j,n)
			{
				if(i!=col)
				{
					//cout<<a[j][i]<<" ";
					colsum[m]+=a[j][i];
				
				}
				//cout<<endl;
				
			}
			
			if(i!=col)
			{
				//cout<<"m is "<<m<<endl;
				m++;
				
			}
			
			
		}

		//cout<<"final empty sum is "<<emptysum<<endl;

		

		int flag=1;

		repi(i,n-2)
		{
			if(rowsum[i]!=rowsum[i+1] )
			{
				flag=0;
				break;
			}
			if(colsum[i]!=colsum[i+1] )
			{
				flag=0;
				break;
			}
		}

		if (flag)
		{
			//cout<<"2"<<endl;
			cout<<rowsum[0]-emptysum;
			return 0;
		}
		
	}
	cout<<"-1";
	return 0;

}