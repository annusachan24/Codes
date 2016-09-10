/*Given a binary tree and a number, return true if the tree has a root-to-leaf path such that adding up all 
the values along the path equals the given number. Return false if no such path can be found. */
//THIS IS WRONG :/ 
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
#define st struct node
struct node
{
	int data;
	st *left,*right;
};


st *newnode(int d)
{
	st *new_node= (st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=	NULL;
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

int sum(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s=s+a[i];
	//cout<<s<<endl;
	return s;
}

int root_to_leaf(st *root,int a[],int l, int g)
{	
	if(root==NULL)
		{ cout<<"vmdbd"<<endl;
		return -1;
		}

	a[l]=root->data;
	l++;
	int s=0;
	if(root->left==NULL and root->right==NULL)
		{	
			/*for(int i=0;i<l;i++)
				s=s+a[i];
				cout<<"sum is "<<s<<endl;
				return s;*/
				s=sum(a,l);
				cout<<s<<" "<<g<<endl;
				if(s==g)
				{
					cout<<"here"<<endl;
					return 1;
				}
				else
					return 0;
		}
	else
	{
		if(root!=NULL)
		{
			root_to_leaf(root->left,a,l,g);
			root_to_leaf(root->right,a,l,g);

		}
		
	}

}

int main()
{
	 int sum = 20;
	 int a[1000];
 
  /* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
  struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
  
  if(root_to_leaf(root,a,0,sum)==1)
  	cout<<"There is a root-to-leaf path with sum "<<sum<<endl;
  else
  	cout<<"There is no root-to-leaf path with sum "<<sum<<endl;
}


