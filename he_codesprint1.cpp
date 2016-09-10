#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	std::vector<int> v;

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				v.push_back(j-i);

		}
	}
	if(v.empty())
		cout<<"-1";
	else
	{
		sort(v.begin(),v.end());
		cout<<v[0];
	}
	return 0;
}