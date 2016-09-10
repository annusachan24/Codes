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

st *newNode(int data)
{
	st *new_node=(st *)malloc(sizeof(st));
	new_node->data=data;
	new_node->left=new_node->right=NULL;
	return new_node;
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

bool find_node(st *root, int key)
{
	if(root==NULL)
		return false;
	if(root->data==key or find_node(root->left,key) or find_node(root->right,key))
		return true;
	else return false;
}

st *lcautil(st *root, int n1, int n2, bool &v1, bool &v2)
{
	if(root==NULL)
		return NULL;
	if(root->data==n1)
	{
		v1=true;
		return root;
	}
	if(root->data==n2)
	{
		v2=true;
		return root;
	}

	st *leftlca=lcautil(root->left,n1,n2,v1,v2);
	st *rightlca=lcautil(root->right,n1,n2,v1,v2);

	if(leftlca and rightlca)
		return root;

	return(leftlca!=NULL)?leftlca:rightlca;
}
st *lca(st *root,int n1, int n2)
{
	bool v1=false;
	bool v2=false;
	st *lcaa=lcautil(root,n1,n2,v1,v2);

	if((v1 and v2) or (v1 and find_node(lcaa,n2) or (v2 and find_node(lcaa,n1))))
		return lcaa;
	return NULL;
}



int main()
{
	st *root=newNode(1);
	root->left = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(9);
    root->left->left->left = newNode(1);
    root->left->left->left->left = newNode(1);
    queue_traversal(root);

    st *l=lca(root,3,9);
    if(l!=NULL)
    	cout<<"the lca of 3 and 9 is "<<l->data<<endl;
    else
    	cout<<"no "<<endl;
    return 0;
}