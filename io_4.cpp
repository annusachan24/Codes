#include<iostream>
using namespace std;
int main()
{
	int l,n,w,h;
	cin>>l>>n;
	while(n--)
	{
		cin>>w>>h;
		if(w<l or h<l)
			cout<<"UPLOAD ANOTHER"<<endl;
		else if(w>l and h>l)
		{	
			if(w==h)
				cout<<"ACCEPTED"<<endl;
			else
				cout<<"CROP"<<endl;
		}
	}
	return 0;
}