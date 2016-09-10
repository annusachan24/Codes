//using deque
#include <iostream>
#include <deque>
#include <queue>
#define  st struct node
using namespace std;

struct node
{
	int data;
	st *left, *right;

};

st *newNode(int d)
{
	st *new_node=new node;
	new_node->data=d;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void print_spiral(struct node* root)
{
	//cout<<root->data<<endl;
	//cout<<"qwer"<<endl;
	deque <st *> q;
	if(root == NULL);
	{
		cout<<"null root"<<endl;
		return;
	}
	
	q.push_back(root);
	bool flag=false;;//if 0 then odd levels (root being at level 0)
	while(!q.empty())
	{


 		flag=!flag;
		int c=q.size();
		while(c--)
		{


			if(flag)//even levels
			{	
				st *temp=q.back();
				cout<<temp->data<<" ";
				q.pop_back();
				if(temp->right!=NULL)
					q.push_front(temp->right);
				if(temp->left!=NULL)
					q.push_front(temp->left);
			}
			else//odd level
			{
				st *temp=q.front();
				cout<<temp->data<<" ";
				q.pop_front();
				if(temp->left!=NULL)
					q.push_back(temp->left);
				if(temp->right!=NULL)
					q.push_back(temp->right);

			}
		}
	}
}

void printSpiral(struct node *root)
{
    deque<node*> d;
    if(root == NULL)
        return;
    d.push_back(root);
    int nodecount;
    struct node* cur;
    bool level = false; //odd 
    while(!d.empty())
    {
        nodecount = d.size();
        level = !level;
        // cout << "level : " << ((level)? cout << "even": cout << "odd") << endl;
        while(nodecount--)
        {
            if(level)
            {        //even
                cur = d.back();
                d.pop_back();
                cout << cur->data << " ";
                if(cur->right)
                    d.push_front(cur->right);
                if(cur->left)
                    d.push_front(cur->left);
            }
            else
            {            //odd
                cur = d.front();
                d.pop_front();
                cout << cur->data << " ";
                if(cur->left)
                    d.push_back(cur->left);
                if(cur->right)
                    d.push_back(cur->right);
            }
        }
    }
}

void queue_traversal(st *root)
{

	if(root==NULL)
		return;
	queue<st *> q;
	int c;
	st *temp;
	q.push(root);
	while(1)
	{
		c=q.size();
		if(c==0)
			return;
		temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);

	}
	//cout<<endl;
}

int main()
{
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);
	cout<<"level order traversal of tree is "<<endl;
	queue_traversal(root);
	cout<<endl<<"spiral traversal is "<<endl;
	//print_spiral(root); // this function is not working if(root==null) is getting executed
	printSpiral(root);
	//cout<<endl;
	return 0;
}