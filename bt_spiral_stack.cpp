#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#define st struct node

struct node
{
	int data;
	st *left, *right;
	
};

st* newNode(int d)
{
	st *new_node=new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void queue_traversal(st *root)// prints level order traversal
{
	if(root==NULL)
		return;

	queue<st *> q;
	q.push(root);
	while(!q.empty())
	{
		st *temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);

	}
}

void print_spiral(st *root)
{
	if(root==0)
		return;
	stack <st *> s1;
	stack <st *> s2;
	s1.push(root);
	bool level=false;
	st *temp;
	while(!s1.empty() or !s2.empty())
	{
		level=!level;
		while(!s1.empty())
		{
			temp=s1.top();
			s1.pop();
			cout<<temp->data<<" ";
			if(temp->right!=NULL)
				s2.push(temp->right);
			if(temp->left!=NULL)
				s2.push(temp->left);
		}
		while(!s2.empty())
		{
			temp=s2.top();
			s2.pop();
			cout<<temp->data<<" ";
			if(temp->left!=NULL)
				s1.push(temp->left);
			if(temp->right!=NULL)
				s1.push(temp->right);

		}

	}
}
int main()
{
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);
	cout<<"level order traversal of tree is "<<endl;
	queue_traversal(root);
	cout<<endl<<"spiral traversal is "<<endl;
	print_spiral(root);
	cout<<endl;
	return 0;
}
