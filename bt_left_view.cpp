#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

#define st struct node 

struct node
{
	int data;
	st *left, *right;
};

st* newNode(int d)
{
	st *new_node=(st*)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=new_node->right=NULL;
	return new_node;
}

void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue <st*> q;
	st *temp;
	q.push(root);
	
	while(1)
	{
		int c=q.size();
		int flag=1;
		while(c--)
		{		
			temp=q.front();
			q.pop();
			if(flag)
			{
				cout<<temp->data<<" ";
				flag=0;
			}
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);


		}
		if(q.empty())
				return;

	}
}

int main()
{
    // Let us create tree 
    struct node *root = newNode(12);
    root->left = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
    root->left->left->left = newNode(1);
    root->left->left->right = newNode(1);
    queue_traversal(root);
    return 0;
}