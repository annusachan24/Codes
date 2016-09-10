#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool leap(ll year)
{
	//ll year;
	int flag;
 
 
 
  if ( year%400 == 0)
  	 flag=1;
    //printf("%d is a leap year.\n", year);
  else if ( year%100 == 0)
  	 flag=0;
    //printf("%d is not a leap year.\n", year);
  else if ( year%4 == 0 )
   	flag=1;
    //printf("%d is a leap year.\n", year);
  else
  	 flag=0;
   // printf("%d is not a leap year.\n", year); 
   //cout<<"flag "<<flag<<endl; 
  return flag;
 
}
int main()
{
	ll yr;
	cin>>yr;
	ll y=yr;
	yr=yr+1;
	ll odd_sum=0;
	ll k=0;
	ll odd_days; //odd days=1 in non leap yr and 2 in leap yr
	while(1)
	{	
		
		int f= leap(yr);//if(year%4==0 || year%400==0 || year%100==0)
		//cout<<"dkghsdf  "<<f;
		if (f)
			odd_days=2;
		else
			odd_days=1;
		cout<<odd_sum<<endl;
		odd_sum=odd_sum+odd_days;
		k++;
		
		cout<<"sum is "<<odd_sum<<endl;
		//cout<<"k is "<<k<<endl;
		if(odd_sum%7==0)
			break;
		yr++;
		
	}
	cout<<y+k;

	return 0;
}