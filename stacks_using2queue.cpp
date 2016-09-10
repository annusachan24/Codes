//stack using 2 queues
#include <iostream>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

queue<int> q1,q2,temp;
void push(int x)
{
	q1.push(x);	
}

int pop()
{
	int s=q1.size();
	while(s!=1)
	{
		q2.push(q1.front());
		q1.pop();
		s--;
	}
	
	int t=q1.front();
	q1.pop();
	temp=q1;
	q1=q2;
	q2=temp;
	return (t);
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
   	int n= pop();
   	int k=pop();
   	cout<<n<<" "<<k;
    return 0;
}

