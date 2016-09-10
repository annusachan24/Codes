#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int c=0;
		while(n>1)
			{
				n=n/2;
				c++;
			}
		cout<<c<<endl;
		cin>>n;
	}
}