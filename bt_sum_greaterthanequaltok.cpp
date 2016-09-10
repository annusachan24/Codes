    #include <iostream>
    #include <stdio.h>
    using namespace std;
     
    struct node
    {
        int data;
        struct node *left,*right;
    };
     
    typedef struct node Node;
     
    Node* newNode(int data)
    {
        Node *newnode=new Node;
        newnode->data=data;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
     
    void printInorder(Node* root)
    {
        if(root)
        {
            printInorder(root->left);
            cout<<root->data<<" ";
            printInorder(root->right);
        }
    }
     
    bool isLeaf(Node* root)
    {
        return (root&&!(root->left)&&!(root->right));
    }
     
    Node* pruneUtil(Node* root,int currentSum,int k)
    {
        if(!root) return NULL;
     
        currentSum=currentSum+root->data;
     
        root->left=pruneUtil(root->left,currentSum,k);
        root->right=pruneUtil(root->right,currentSum,k);
     
        if(isLeaf(root)&&currentSum<k)
        {
            delete root;
            return NULL;
        }
     
        return root;
    }
     
    Node* prune(Node* root,int k)
    {
        return pruneUtil(root,0,k);
    }
     
    int main()
    {
        int k = 45;
        struct node *root = newNode(1);
        root->left = newNode(2);
        root->right = newNode(3);
        root->left->left = newNode(4);
        root->left->right = newNode(5);
        root->right->left = newNode(6);
        root->right->right = newNode(7);
        root->left->left->left = newNode(8);
        root->left->left->right = newNode(9);
        root->left->right->left = newNode(12);
        root->right->right->left = newNode(10);
        root->right->right->left->right = newNode(11);
        root->left->left->right->left = newNode(13);
        root->left->left->right->right = newNode(14);
        root->left->left->right->right->left = newNode(15);
     
        printf("Tree before truncation\n");
        printInorder(root);
     
        root = prune(root, k); // k is 45
     
        printf("\n\nTree after truncation\n");
        printInorder(root);
        return 0;
    }

