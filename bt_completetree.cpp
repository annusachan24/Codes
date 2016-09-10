/*A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far
left as possible. 
The method 2 of level order traversal post can be easily modified to check whether a tree is Complete or not. To understand the approach,
let us first define a term ‘Full Node’. A node is ‘Full Node’ if both left and right children are not empty (or not NULL).
The approach is to do a level order traversal starting from root. In the traversal, once a node is found which is NOT a Full Node, all
the following nodes must be leaf nodes.
Also, one more thing needs to be checked to handle the below case: If a node has empty left child, then the right child must be empty. */

#include <bits/stdc++.h>
using namespace std;
#define st struct node
//typedef struct node st;

st
{
	int data;
	st *left, *right;
};

st *newNode(int data)
{
	st *new_node=new node;
	new_node->data= data;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
//returns true if node is not a full node(either of left or right child is absent)
bool check_fullnode(st *node)
{
	if(node==NULL)
		return false;
	if(node->left!=NULL and node->right!=NULL)
		return true;//it is not a full node
	return false;//it is a full node
}
bool isleaf(st *node)
{
	if(node==NULL)
		return false;
	if(node->left==NULL and node->right==NULL)
		return true;
	return false;
}
int ht(st *root)
{
	if (root==NULL)
		return 0;
	int l=ht(root->left);
	int r=ht(root->right);

	if(l>r)
		return (1+l);
	else
		return(r+1);
}


bool isCompleteBT(st *node)
{
	if(node==NULL)
		return true;
	st *temp;
	queue <st *> q;
	q.push(node);
	bool f=true;
	while(!q.empty())
	{
		temp=q.front();
		q.pop();
		//cout<<temp->data<<" ";
		if(check_fullnode(temp) and !isleaf(temp))
		{
			if(temp->right!=NULL)
			{
				if(temp->left==NULL)
					return false;
			}

		}	
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}

int main()
{
   /* Let us construct the following Binary Tree which
      is not a complete Binary Tree
            1
          /   \
         2     3
        / \     \
       4   5     6
    */
 
  struct node *root  = newNode(1);
  root->left         = newNode(2);
  root->right        = newNode(3);
  //root->left->left   = newNode(4);
  root->left->right  = newNode(5);
  root->right->right = newNode(6);
 
  if ( isCompleteBT(root) == true )
      printf ("Complete Binary Tree");
  else
      printf ("NOT Complete Binary Tree");
 
  return 0;
}

