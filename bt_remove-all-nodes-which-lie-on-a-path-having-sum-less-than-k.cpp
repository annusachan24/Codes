#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

#define st struct Node

st 
{
	int data;
	st *left,*right;
};

// A utility function to create a new Binary Tree node with given data
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 

st *check(st *root,int *k)
{
	if(root==NULL)
		return NULL;
	if(k>0)
		{
			free(root);
			root=NULL;
		}
	root->left=check(root->left, k-(root->left->data));
	root->right=check(root->right, k-(root->right->data));
	
	return root;
}
void print(struct Node *root)
{
	if(root==NULL)
		return;
    if (root != NULL)
    {
        print(root->left);
        printf("%d ",root->data);
        print(root->right);
    }
}
// Driver program to test above function
int main()
{
    int k = 45;
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);
 
   // printf("Tree before truncation\n");
   // print(root);
 
    root = check(root, &k); // k is 45
 
    printf("\n\nTree after truncation\n");
    print(root);
 
    return 0;
}