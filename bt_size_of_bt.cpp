//Size of a tree is the number of elements present in the tree

#include <bits/stdc++.h>

struct node
{
	int data;
	struct node* left, *right;
};

node* newNode(int data)
{
	node *ptr= new node;
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	return (ptr);
}

int size_of_tree(struct node* root)
{
	node *ptr=new node;
	ptr=root;
	if(ptr==NULL)
		return 0;
	else return(size_of_tree(ptr->left)+1+size_of_tree(ptr->right));
}

int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);   
 
  printf("Size of the tree is %d \n", size_of_tree(root));  
  //getchar();
  return 0;
}
