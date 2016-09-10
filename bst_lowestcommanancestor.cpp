#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define st struct node

st
{
	int data;
	st *left, *right;
};

void inordertraversal(st *root)
{
	if(root==NULL)
		return ;
	inordertraversal(root->left);
	cout<<root->data<<" ";
	inordertraversal(root->right);
}

st *newNode(int data)
{
	st *new_node=new node;
	new_node->data=data;
	new_node->left=new_node->right=NULL;
	return new_node;
}

st  *insert(st *root, int key)
{
	if(root==NULL)
		return newNode(key);
	if(root->data>key)
		root->left=insert(root->left,key);
	if(root->data<key)
		root->right=insert(root->right,key);
	return root;

}
st *lca(st *root, int n1,int n2)
{
	if(root==NULL)
		return NULL;
	if(n1<root->data and n2<root->data)
		return lca(root->left,n1,n2);
	if(n1>root->data and n2>root->data)
		return lca(root->right,n1,n2);
	return root;
}

/*
int main()
{
   
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
   	insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  
    // print inoder traversal of the BST
    inordertraversal(root);
  
    return 0;
} */
    /* Driver program to test lca() */
int main()
{
    // Let us construct the BST shown in the above figure
    struct node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
 
    int n1 = 10, n2 = 14;
    struct node *t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
    n1 = 14, n2 = 8;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
    n1 = 10, n2 = 22;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->data);
 
   // getchar();
    return 0;
}

