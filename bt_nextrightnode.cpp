#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

#define st struct node

st
{
	int data;
	st *left, *right;	
};

void printtree(st *root)
{
	if(root)
	{
		cout<<root->data<<" ";
		printtree(root->left);
		printtree(root->right);
	}
}

struct node* newNode(int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data =data;
	new_node->right=new_node->left=NULL;
	return new_node;
}

st *next_right_node(st *root, int key)
{
	if (root==NULL)
		return NULL;
	queue <st *> q;
	
	int c;
	st *temp;
	q.push(root);
	while(1)
	{
		
		int c=q.size();

		while(c--)
		{
			temp=q.front();
			q.pop();
			//if(temp->data==key and c!=0)
			if(temp->data==key)
				return q.front();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		if(q.empty())
			return NULL;
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
    root->left->left->left->left = newNode(1);
    st *nextright =next_right_node(root, 5);
    cout<<nextright->data<<endl;
    return 0;
}
