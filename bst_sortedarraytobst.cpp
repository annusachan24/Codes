#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;
#define st struct node

st{
	int data;
	st *left, *right;
};

st *newNode(int d)
{
	st *new_node=(st *)malloc(sizeof(st));
	new_node->data=d;
	new_node->left=new_node->right=	NULL;
	return new_node;
}

st *insert(st *root, int key)
{
	if(root==NULL)
		return newNode(key);

	if(key<root->data)
		root->left=insert(root->left, key);
	else
		root->right=insert(root->right, key);
	return root;
}
void queue_traversal(st *root)
{
	if(root==NULL)
		return;
	queue <st*> q;
	q.push(root);
	st *temp;
	while(1)
	{
		int c=q.size();
		while(c--)
		{
			temp=q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		if(q.empty())
			return;

	}

}

st *arraytobst(int arr[], int min,int max)
{
	if(min>max)
		return NULL;
	int mid=(min+max)/2;
	st *root=newNode(arr[mid]);
	root->left=arraytobst(arr,min,mid-1);
	root->right=arraytobst(arr,mid+1,max);
	return root;
}

void ino(st *root)
{
	if(root==NULL)
		return;
	ino(root->left);
	cout<<root->data<<" ";
	ino(root->right);
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    st *root=arraytobst(arr,0,n-1);
    cout<<"sorted array to bst "<<endl;
    queue_traversal(root);
    cout<<endl;
    ino(root);

    return 0;
}