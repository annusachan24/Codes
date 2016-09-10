/*Given a binary tree, print level order traversal in a way that nodes of all levels are printed in separate lines.

For example consider the following tree

          1
       /     \
      2       3
    /   \       \
   4     5       6
        /  \     /
       7    8   9

Output for above tree should be
1
2 3
4 5 6
7 8 9 */

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct tree st;
struct tree
{
	int data;
	st *left;
	st *right;
};

int ht (st *node)
{
	int l_ht,r_ht;
	if(node==NULL)
		return 0;
	else
	{
		l_ht=ht(node->left);
		r_ht=ht(node->right);

		if(l_ht>r_ht)
			return(1+l_ht);
		else
			return(1+r_ht);
	}
}
st *newNode(int data)
{
	st *new_node=(st*)malloc(sizeof(st));
	new_node->data=data;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

//use this or the above fn, both are same
tree *newnode(int data)
{
    tree *temp = new tree;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void print_level_by_level_traversal(st *root, int level)
{
	if(root==NULL)
		return;
	else if (level==1)
	{
		cout<<root->data;
		cout<<" ";
	}
	else if(level>1)
	{
		print_level_by_level_traversal(root->left,level-1);
		print_level_by_level_traversal(root->right,level-1);
	}
}

//PRINTING LEVEL ORDER LINE BY LINE USING THE QUEUE
void print_level_by_level_traversal_queue(st *root)
{
	if(root==NULL)
		return ;
	queue<tree *> q;

	q.push(root);
	while(1)
	{
		int count=q.size();//no of nodes in current level
		if(count==0)
			break;
		while(count>0)
		{
			tree *node=q.front();
			cout<<node->data<<" ";
			q.pop();
			if(node->left!=NULL)
				q.push(node->left);
			if(node->right!=NULL)
				q.push(node->right);
			count--;
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
	int n=ht(root);
	
	for(int i=1;i<=n;i++)
	{
		cout<<"nodes at level "<<i<<" is ";
		print_level_by_level_traversal(root,i);
		cout<<endl;
	}
}
