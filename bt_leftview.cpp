#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define st struct node
void printGivenLevel(struct node* root, int level, int k);
int height(struct node* node);

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

void leftview(st *root, int level,int *maxlevel)
{
	if(root==NULL)
		return ;
	if(*maxlevel<level)
	{
		cout<<root->data<<" ";
		*maxlevel=level;
	}
	leftview(root->left,level+1,maxlevel);
	leftview(root->right,level+1,maxlevel);

}

void print_level_by_level_traversal_queue(st *root)
{
	if(root==NULL)
		return ;
	queue<st *> q;
	
	bool flag=false;
	q.push(root);
	while(1)
	{
		int count=q.size();//no of nodes in current level
		if(count==0)
			break;
		while(count>0)
		{
			st *node=q.front();
			if(!flag)
			{
				cout<<node->data<<" ";
				flag=true;
			}
			q.pop();
			if(node->left!=NULL)
				q.push(node->left);
			if(node->right!=NULL)
				q.push(node->right);
			count--;
		}
		flag=false;
		//cout<<endl;
	}

}


int main()
{
	/*struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25); */

    struct node *root = newNode(12);
    root->left = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
    root->left->left->left = newNode(1);
    root->left->right->left = newNode(1); 
     // int ll=get_level_of_leftmostleaf(root);
    int maxlevel=0;
   // leftview(root, 1, &maxlevel);
    print_level_by_level_traversal_queue(root);
     return 0;
}