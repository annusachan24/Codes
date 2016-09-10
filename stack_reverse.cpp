#include <iostream>
#include <stack>
using namespace std;

void reverse_stack(stack<int> s)
{
	int t;
	t=s.top();
	s.pop();
	reverse_stack(s);
	s.push(t);
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	reverse_stack(s);
	for(int i=0;i<s.size();i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}