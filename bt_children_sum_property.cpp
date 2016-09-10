#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define st struct node

struct node
{
	int data;
	st *left, *right;
};

st *newNode(int d)
{
	st *new_node=new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right	=NULL;
	return new_node;
}

void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue <st *> q;
	st *temp;
	q.push(root);
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

bool children_sum_property(st *root)
{
	int l=0, r=0;
	if(root==NULL or (root->left==NULL and root->right==NULL))
		return true;
	if(root->left!=NULL)
		l=root->left->data;
	if(root->right!=NULL)
		r=root->right->data;

	if(root->data==l+r and children_sum_property(root->left) and children_sum_property(root->right))
		return true;
	else
		return false;

}

int main()
{
  struct node *root  = newNode(10);
  root->left         = newNode(8);
  root->right        = newNode(2);
  root->left->left   = newNode(3);
  root->left->right  = newNode(5);
  root->right->right = newNode(1);
  if(children_sum_property(root))
    printf("The given tree satisfies the children sum property ");
  else
    printf("The given tree does not satisfy the children sum property ");
 
  getchar();
  return 0;
}