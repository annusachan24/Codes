#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define st struct node

st
{
	int data;
	st *left, *right;
};

void inorder_traversal(st *root)
{
	if(root==NULL)
		return;
	inorder_traversal(root->left);
	cout<<root->data<<" ";
	inorder_traversal(root->right); 
}

int getLevelUtil(st *root,int d,int level)
{
	if(root==NULL)
		return 0;
	if(root->data==d)
		return level;
	int dlevel;
	dlevel=getLevelUtil(root->left,d,level+1);
	if(dlevel!=0)
		return dlevel;
	dlevel=getLevelUtil(root->right,d,level+1);
	return dlevel;
}
int getLevel(struct node *node, int data)
{
    return getLevelUtil(node,data,1);
}

st *newNode(int d)
{
	st *new_node= (st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=	NULL;
	new_node->right=NULL;
	return new_node;
}

int main()
{
	struct node *root = new struct node;
    int x;
 
    /* Constructing tree given in the above figure */
    root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
 
    for (x = 1; x <=5; x++)
    {
      int level = getLevel(root, x);
      if (level)
        //printf(" Level of %d is %d\n", x, getLevel(root, x,1));
        printf(" Level of %d is %d\n", x, getLevel(root,x));
      else
        printf(" %d is not present in tree \n", x);
 
    }
 
}
