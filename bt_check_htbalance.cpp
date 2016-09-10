//How to determine if a binary tree is height-balanced? 
/*An empty tree is height-balanced. A non-empty binary tree T is balanced if:
1) Left subtree of T is balanced
2) Right subtree of T is balanced
3) The difference between heights of left subtree and right subtree is not more than 1. */

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define st struct node
 
st
{
	int data;
	st *left,*right; 
};

st *newnode(int d)
{
	st *new_node= new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void queue_traversal(st *node)
{
	if(node==NULL)
		return;

	queue <st *> q;
	q.push(node);
	st *temp;
	while(!q.empty())
	{	
		temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}

int ht(st *node)
{
	if(node==NULL)
		return 0;
	int l_ht=ht(node->left);
	int r_ht=ht(node->right);

	if(l_ht>r_ht)
		return (1+l_ht);
	else
		return (1+r_ht);
}

bool ht_balance(st *root)
{
	if(root==NULL)
		return 1;

	int l=ht(root->left);
	int r=ht(root->right);

	if(abs(l-r<=1) and ht_balance(root->left) and ht_balance(root->right))
		return 1;
	else
		return 0;
}

int main()
{
	st *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->right->left=newnode(5);
	root->left->right->left->left=newnode(5);

	cout<<"level order traversal of tree is "<<endl;
	queue_traversal(root);

	cout<<endl<<"ht of tree is "<<endl;
	cout<<ht(root)<<endl;
	if(ht_balance(root))
		cout<<"balanced"<<endl;
	else
		cout<<"not balanced"<<endl;
	return 0;
}