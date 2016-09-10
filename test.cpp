#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,121,12121,12121111};
	int* it=find(a,a+15,121);
	cout<<"index is"<<endl;
	//cout<<it-a<<endl;
	cout<<it-a;
}