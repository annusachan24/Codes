#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

#define maxht 10000
#define st struct node

st
{
	int data;
	st *left, *right;
};

st *newNode(int d)
{
	st *new_node=(st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=new_node->right=NULL;
	return new_node;
}

void printnodesdistancekleafnode(st *root, int path[], bool visited[], int pathlen, int k)
{
	if(root==NULL)
		return;

	path[pathlen]=root->data;
	//visited[pathlen]=false;
	pathlen++;

	if(root->left==NULL and root->right==NULL and pathlen-k-1>=0 and visited[pathlen-k-1]!=true)
	{
		cout<<path[pathlen-k-1]<<" ";
		visited[pathlen-k-1]=true;
		return;
	}
	printnodesdistancekleafnode(root->left,path,visited,pathlen,k);
	printnodesdistancekleafnode(root->right,path,visited,pathlen,k);
}
void queue_traversal(st *root)
{
	if(root==NULL)
		return ;

	queue <st *> q;
	q.push(root);
	st *temp;
	while(1)
	{
		int c=q.size();
		while(c--)
		{
			temp=q.front();
			q.pop();
			cout<<temp->data<<" ";
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
	 st* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    int path[maxht];
    bool visited[maxht]={false};
    queue_traversal(root);
    cout << "Nodes at distance 2 are: ";
    printnodesdistancekleafnode(root,path,visited,0,2);
    return 0;
}