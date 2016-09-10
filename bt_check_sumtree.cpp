/*The Method 1 uses sum() to get the sum of nodes in left and right subtrees. The method 2 uses following rules to get the sum directly.
1) If the node is a leaf node then sum of subtree rooted with this node is equal to value of this node.
2) If the node is not a leaf node then sum of subtree rooted with this node is twice the value of this node (Assuming that the tree 
rooted with this node is SumTree).

*/


#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define st struct node

st 
{
	int data;
	st *left,*right;
};

st *newNode(int data)
{
	st *new_node=new node;
	new_node->data=data;
	new_node->left=	NULL;
	new_node->right=NULL;
	return new_node;
}

void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue <st *> q;
	q.push(root);
	st *temp;
	while(!q.empty())
	{	
		temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);

	}

}
int sum(st *root)
{
	if(root==NULL)
		return 0;
	return (sum(root->left)+root->data+sum(root->right));
}

int check_sumtree(st *root)//method 1
{
	if(root==NULL or (root->left==NULL and root->right==NULL))
		return 1;
	int ls,rs;
	ls=sum(root->left);
	rs=sum(root->right);
	if((root->data==ls+rs) and (check_sumtree(root->left)) and (check_sumtree(root->right)) )
		return 1;
	return 0;
}
int isleafnode(st *root)
{
	if(root==NULL)
		return 0;
	if(root->left==NULL and root->right==NULL)
		return 1;
	else
		return 0;
}

int issumtree(st *node)//method 2
{
	int ls,rs;
	if(node==NULL or isleafnode(node))
		return 1;
	if(issumtree(node->left) and issumtree(node->right))
	{
		if(node->left==NULL)
			ls=0;
		else if(isleafnode(node->left))
			ls=node->left->data;
		else
			ls=2*(node->left->data);


		if(node->right==NULL)
			rs=0;
		else if(isleafnode(node->right))
			rs=node->right->data;
		else
			rs=2*(node->right->data);

		return (node->data==ls+rs);
	}
	return 0;

}


int main()
{
    struct node *root  = newNode(26);
    root->left         = newNode(10);
    root->right        = newNode(3);
    root->left->left   = newNode(4);
    root->left->right  = newNode(6);
    root->right->right = newNode(3);
    //if(check_sumtree(root))
    if(issumtree(root))
    	cout<<"yes "<<endl;
    else
    	cout<<"no"<<endl;
    return 0;
}