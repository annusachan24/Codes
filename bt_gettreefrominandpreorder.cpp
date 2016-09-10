#include <bits/stdc++.h>
#define st struct node

st
{
	char data;
	st *left,*right;
};

struct node* newNode(char data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}

int search(char arr[], int start, int end, char value)
{
	for(int i=start;i<=end;i++)
	{
		if(arr[i]==value)
			return i;
	}
}

struct node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
	static int preIndex=0;
	if(inStrt>inEnd)
		return NULL;
	st *tnode=newNode(pre[preIndex++]);

	if(inStrt==inEnd)
		return tnode;

	int inIndex=search(in,inStrt,inEnd,tnode->data);

	tnode->left=buildTree(in,pre,inStrt,inIndex-1);
	tnode->right=buildTree(in,pre,inIndex+1,inEnd);
	return tnode;
}
/* This funtcion is here just to test buildTree() */
void printInorder(struct node* node)
{
  if (node == NULL)
     return;
 
  /* first recur on left child */
  printInorder(node->left);
 
  /* then print the data of node */
  printf("%c ", node->data);
 
  /* now recur on right child */
  printInorder(node->right);
}
 
/* Driver program to test above functions */
int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildTree(in, pre, 0, len - 1);
 
  /* Let us test the built tree by printing Insorder traversal */
  printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  getchar();
}