/*Traverse the tree T in preorder fashion. For every visited node in 
the traversal, see if the subtree rooted with this node is identical to S. */
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define st struct node

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

void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue <st *> q;
	q.push(root);
	st *temp;
	while(!q.empty())
	{	
		temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);

	}

}

int isIdentical(st *root1, st *root2)
{
	if(root1==NULL and root2==NULL)
		return 1;
	if(root1==NULL or root2==NULL)
		return 0;
	return (root1->data==root2->data and isIdentical(root1->left,root2->left) and isIdentical(root1->right, root2->right));
}

int subtree(st *r1, st *r2)
{
	if(r2==NULL)
		return 1;
	if(r1==NULL)
		return 0;
	if (isIdentical(r1,r2))
		return 1;
	/* If the tree with root as current node doesn't match then
       try left and right subtrees one by one */
	return subtree(r1->left,r2) or subtree(r1->right,r2);
}

/* Driver program to test above function */
int main()
{
    // TREE 1
    /* Construct the following tree
              26
            /   \
          10     3
        /    \     \
      4      6      3
       \
        30
    */
    struct node *T        = newNode(26);
    T->right              = newNode(3);
    T->right->right       = newNode(3);
    T->left               = newNode(10);
    T->left->left         = newNode(4);
    T->left->left->right  = newNode(30);
    T->left->right        = newNode(6);
 
    // TREE 2
    /* Construct the following tree
          10
        /    \
      4      6
       \
        30
    */
    struct node *S    = newNode(10);
    S->right          = newNode(6);
    S->left           = newNode(4);
    S->left->right    = newNode(30);
 
 
    if (subtree(T, S))
        printf("Tree 2 is subtree of Tree 1");
    else
        printf("Tree 2 is not a subtree of Tree 1");
 
    //getchar();
    return 0;
}