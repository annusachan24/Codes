#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char c[100];
	int i,j;
	cin>>c;
	int l=strlen(c);
	int flag=0;
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		if(c[i]!=c[j])
		{
			flag=-1;
			break;
		}
	}
	if(flag==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;


}