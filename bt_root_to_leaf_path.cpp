//Given a binary tree, print out all of its root-to-leaf paths one per line.
#include <bits/stdc++.h>
using namespace std;
typedef struct node st;

struct node
{
	int data;
	st *left,*right;
};


st *newnode(int d)
{
	st *new_node= (st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=	NULL;
	new_node->right=NULL;
	return new_node;
}

void print_array(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue<st *> q;
	int c;
	st *temp;
	q.push(root);
	while(1)
	{
		c=q.size();
		if(c==0)
			return;
		temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);

	}
	//cout<<endl;
}

void root_to_leaf(st *root, int a[],int l)
{
	if(root==NULL)
	{
		cout<<"empty tree "<<endl;
		return;
	}
	a[l]=root->data;
	l++;
	if(root->left==NULL and root->right==NULL)
		print_array(a,l);
	else
	{
		root_to_leaf(root->left,a,l);
		root_to_leaf(root->right,a,l);
	}


}

int main()
{
	st *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"level order traversal of tree is "<<endl;
	queue_traversal(root);
	cout<<endl;
	int a[1000];
	int l=0;
	root_to_leaf(root,a,l);
}