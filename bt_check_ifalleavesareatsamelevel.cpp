#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
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
int l=0;
void get_level_of_leftmostleaf(st *root)
{
	if(root==NULL)
		return ;
	
	if(root->left!=NULL)
	{
		l++;
		get_level_of_leftmostleaf(root->left);
	}
	//cout<<"jedb "<<l<<endl;
	//return l;
}
bool check_samelevel(st *root, int level)
{
	if(root==NULL)
		return true;
	if(root->left==NULL and root->right==NULL)
	{
		if(level==l)
			return true;
		else
			return false;
	}
	check_samelevel(root->left,level+1);
	check_samelevel(root->right,level+1);
	//return true;
	//return false;
}

int main()
{
	struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25); 

    /*struct node *root = newNode(12);
    root->left = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
    root->left->left->left = newNode(1);
    root->left->right->left = newNode(1); */
     // int ll=get_level_of_leftmostleaf(root);
      //cout<<"vvvv "<<ll;
    if(check_samelevel(root,0))
    	cout<<"at same level"<<endl;
    else
    	cout<<"not at same level"<<endl;
    return 0;
}