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

st *newnode(int data)
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
bool printAncestors(st *node, int k)
{
	if(node==NULL)
		return false;
	if(node->data==k)
		return true;
	if(printAncestors(node->left,k) or printAncestors(node->right,k))
	{
		cout<<node->data<<" ";
		return true;
	}
	return false;
}

int main()
{
	/* Construct the following binary tree
              1
            /   \
          2      3
        /  \
      4     5
     /
    7
  */
  struct node *root = newnode(1);
  root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->left->left  = newnode(7);
 
  printAncestors(root, 7);
 
  
  return 0;
}

