#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;
};

struct node* newNode(int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data =data;
	new_node->right=new_node->left=NULL;
	return new_node;
}

bool check_level(struct node *root, int level, int *leaflevel)
{
	if(root==NULL)
		return true;

	if(root->left==NULL and root->right==NULL)
	{
		//if it the first leftmost leaf
		if(*leaflevel==0)
		{
			*leaflevel=level;
			return true;
		}
		//if it a leaf node but not the first leaf node
		if(level==*leaflevel)
			return true;
		else
			return false;
	}

	return (check_level(root->left, level+1, leaflevel) and check_level(root->right, level+1, leaflevel));
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
    int level=0, leaflevel=0;
    if (check_level(root,level,&leaflevel))
        printf("Leaves are at same level\n");
    else
        printf("Leaves are not at same level\n");
    getchar();
    return 0;
}