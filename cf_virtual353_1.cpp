#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long 


bool is_integer(double k)
{
  bool t;
  if(floor(k) == ceil(k) and floor(k)>0)
  	t=true;
  else
  	t=false;
  //cout<<t;
  
  return t;
}

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double n;
	bool flag=true;
	//a=abs(a);
	//b=abs(b);
	//c=abs(c);
	if(c==0)
	{
		if(a==b)
		cout<<"YES";
	else
		cout<<"NO";

		flag=false;
		return 0;
	}
	/*if(a==0)
	{
		n=(b-a)/c +1;
		//cout<<n<<endl;
		if(is_integer(n))
			cout<<"YES";
		else
			cout<<"NO";
		flag=false;
		return 0;
		
	}
	if(b==0)
	{
		n=(b-a)/c +1;
		//cout<<n<<endl;
		if(is_integer(n))
			cout<<"YES";
		else
			cout<<"NO";
		flag=false;
		return 0;
	} */

	if(flag)
	{
		if(b<0 and a>0 and c>0)
			cout<<"NO";
		else
		{
		n=(b-a)/c +1;
		//cout<<n<<endl;
		if(is_integer(n))
			cout<<"YES";
		else
			cout<<"NO";
		}
		return 0;
	}
	


	
}