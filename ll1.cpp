//Delete a Linked List node at a given position
#include<stdio>
#include<stdlib>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int new_data)
{
	stuct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next= *head_ref;
	*head_ref=new_node;
}

void print_l(struct node* node)
{
	while(node!=NULL)
	{
		printf(" %d",node->data)
		node=node->next;
	}
}

int main()
{
	struct node* head=NULL;
	 push(&head,1);
	 push(&head,2);
	 puts("Created Linked List: ");
     printList(head);
}

