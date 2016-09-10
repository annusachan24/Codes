#include <iostream>
using namespace std;

int main()
{
	int m=4,n=4;
	//cin>>m>>n;
	int t;
	cin>>t;
	while(t--)
	{

		int a[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		/*for(int i=0;i<m;i++)
			{for(int j=0;j<n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;}*/
		

		int k=0,l=0; //k for row and l for col
		int i;
		while(k<m and l<n)
		{
			for(i=l;i<n;i++)//top row
				cout<<a[k][i]<<" ";
			k++;

			for(i=k;i<m;i++)//rightmost col
				cout<<a[i][n-1]<<" ";
			n--;

			if(k<m)//lowermost row
			{
				for(i=n-1;i>=l;i--)
					cout<<a[m-1][i]<<" ";
				m--;
			}
			if(l<n)
			{
				for(i=m-1;i>=k;i--)
					cout<<a[i][l]<<" ";
				l++;
			}
		}
	}
	return 0;
}