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

void queue_traversal(st *node)
{
	if(node==NULL)
		return;
	st *temp;
	queue <st *> q;
	q.push(node);
	
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

int print_path(st *node, st *target_leaf)
{
	if(node==NULL)
		return 0 ;
	if(node==target_leaf or print_path(node->left,target_leaf) or print_path(node->right,target_leaf))
	{
		cout<<node->data<<" ";
		return 1;
	}
	return 0;
}

void get_max_sum_leaf(st *root, int *max_sum,int current_sum,  st **leaf)
{
	if(root==NULL)
		return;
	current_sum=current_sum+root->data;
	if(root->left==NULL and root->right==NULL)
	{
		if(current_sum>*max_sum)
		{
			*max_sum=current_sum;
			*leaf=root;
		}
	}
	get_max_sum_leaf(root->left,max_sum,current_sum, leaf);
	get_max_sum_leaf(root->right,max_sum,current_sum,leaf);

}
int maxsumpath(st *node)
{
	if (node==NULL)
		return 0;
	st *target_leaf;
	int max_sum=INT_MIN;

	get_max_sum_leaf(node,&max_sum,0, &target_leaf);
	print_path(node,target_leaf);
	return max_sum;
}

int main()
{
    struct node *root = NULL;
 
    /* Constructing tree given in the above figure */
    root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
    int s=maxsumpath(root);
 	cout<<endl<<s<<endl;
 	return 0;
 }