//diameter of a tree
/* Return max of following three
   1) Diameter of left subtree
   2) Diameter of right subtree
   3) Height of left subtree + height of right subtree + 1 */
#include <iostream>
#include <queue>
using namespace std;
#define st struct node

st
{
	int data;
	st *left, *right;
};

st *newnode(int d)
{
	st *new_node= new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void queue_traversal(st *node)
{
	if(node==NULL)
		return;

	queue <st *> q;
	q.push(node);
	st *temp;
	while(!q.empty())
	{	
		temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}
int ht(st *node)
{
	if(node==NULL)
		return 0;
	int l_ht=ht(node->left);
	int r_ht=ht(node->right);

	if(l_ht>r_ht)
		return (1+l_ht);
	else
		return (1+r_ht);
}
int max(int a, int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
int diameter_of_tree(st *node)
{
	if(node==NULL)
		return 0;
	int l_ht=ht(node->left);
	int r_ht=ht(node->right);
	int l_dai=diameter_of_tree(node->left);
	int r_dia=diameter_of_tree(node->right);
	int dia=max(l_ht+r_ht+1 , max(l_dai, r_dia));
	return dia;

}


int main()
{
	st *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"level order traversal of tree is "<<endl;
	queue_traversal(root);

	cout<<endl<<"ht of tree is "<<endl;
	cout<<ht(root)<<endl;
	cout<<"diameter of tree is "<<diameter_of_tree(root)<<endl;
}