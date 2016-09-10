#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->right=NULL;
	new_node->left=NULL;
	return new_node;
}

bool same(struct node* t1, struct node* t2)
{
	//int q,w,e=1;
	if(t1==NULL and t2==NULL)
		return 1;
	if (t1!=NULL and t2!=NULL)
	{
		return (t1->data==t2->data and same(t1->left,t2->left) and same(t1->right,t2->right));
	}
	
	return 0;

}

int main()
{

	struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5); 

    struct node *root1 = newNode(1);
    root1->left = newNode(2);
    //root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5); 

    if(same(root,root1))
    	cout<<"identical"<<endl;
    else
    	cout<<"not identical"<<endl;
	return 0;
}