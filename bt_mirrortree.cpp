/*Convert a Binary Tree into its Mirror Tree

Mirror of a Tree: Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes 
interchanged.*/


#include<iostream>
#include<queue>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

typedef struct node st;

struct node
{
	int data;
	st *left,*right;
	
};

st *newnode(int d)
{
	st *new_node=(st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void mirror_tree(st *node)
{
	st *temp;
	if(node==NULL)
		return;
	else
	{
		mirror_tree(node->left);
		mirror_tree(node->right);
		temp= node->left;
		node->left=node->right;
		node->right=temp;
	}
}

//queue to print the  traversal of tree and its mirror tree
void queue_traversal(st *node)
{	
	queue<st *> q;
	int c;
	st *temp;
	if (node==NULL)
		return;
	q.push(node);
	while(1)
	{
		c=q.size();
		if (c==0)
			break;
		while(c--)
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

}

int main()
{
	st *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);

	cout<<"tree 1 "<<endl;
	queue_traversal(root);
	cout<<endl;
	mirror_tree(root);
	cout<<"tree 2 "<<endl;
	queue_traversal(root);
	cout<<endl;
	return 0;
}

