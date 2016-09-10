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


tree *newnode(int data)
{
    tree *temp = new tree;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
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
			st *node=q.front();
			cout<<node->data<<" ";
			q.pop();
			if(node->left!=NULL)
				q.push(node->left);
			if(node->right!=NULL)
				q.push(node->right);
			count--;
		}
		//remove this cout<<endl and get the level order travelsal
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
	print_level_by_level_traversal_queue(root);
	return 0;
}
