#include<iostream>
#include<queue>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

typedef struct node st;
struct node
{	
	int data;
	st *left, *right;
	
};

st *newnode(int d)
{
	st *new_node=new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
int count_leaf_nodes(st *root)
{
	if(root==NULL)
	{
		cout<<"empty tree "<<endl;
		return 0;
	}
	else if(root->left==NULL and root->right==NULL)
		return 1;
	else
		return (count_leaf_nodes(root->left)+count_leaf_nodes(root->right));
}

void queue_traversal(st *root)
{
	st *f;
	if(root==NULL)
		return;
	queue <st *> q;
	q.push(root);
	int c;
	while(1)
	{
		c=q.size();//no of nodes in a given level
		if(c==0)
				break;
		while(c--)
		{
			
			f=q.front();
			cout<<f->data<<" ";
			q.pop();
			if(f->left!=NULL)
				q.push(f->left);
			if(f->right!=NULL)
				q.push(f->right);

		}
		cout<<endl;
	}
}

int main()
{
	st *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"tree is "<<endl;
	queue_traversal(root);
	//cout<<endl;
	cout<<"no of leaf nodes are "<<count_leaf_nodes(root)<<endl;

	return 0;
}