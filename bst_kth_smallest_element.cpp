#include <iostream>
#include <stdlib.h>
using namespace std;
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

st *insert(st *root,int key)
{
	if(root==NULL)
		return newNode(key);
	if(key>root->data)
		root->right=insert(root->right, key);
	else
		root->left=insert(root->left, key);

	return root;
}

void print_inorder(st *root)
{
	if(root==NULL)
		return;
	print_inorder(root->left);
	cout<<root->data<<" ";
	print_inorder(root->right);
}

void kth_smallest(st *root, int k, int *n)
{
	if(root==NULL)
		return;
	kth_smallest(root->left,k,n);
	(*n)++;
	if(k==*n)
		{cout<<k<<"th smallest element is "<<root->data<<endl; return; }
	kth_smallest(root->right,k,n);
}
void kth_largest(st *root, int k, int *n)
{
	if(root==NULL)
		return;
	kth_largest(root->right, k,n);
	(*n)++;
	if(k==*n)
	{
		cout<<k<<"th largest element is "<<root->data<<endl;
		return;
	}
	kth_largest(root->left,k,n);
}


int main()
{
	st *root=newNode(20);
	insert(root,8);
	insert(root,22);
	insert(root,2);
	insert(root,10);
	insert(root,12);
	insert(root,14);
	print_inorder(root);
	int ns=0;
	int nl=0;
	//cout<<"3rd smallest element is "<<kth_smallest(root,3,0)<<endl;
	//cout<<"3rd larget element is "<<kth_largest(root,3,0)<<endl;
	kth_smallest(root,3,&ns);
	kth_largest(root,3,&nl);
	return 0;

}

