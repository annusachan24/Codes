//Write a function to get Nth node in a Linked List
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void push(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	*head_ref=new_node;
}

void print_ll(struct node* head)
{
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
//geeks way
int Nth_node(struct node* head,int n)
{
	struct node* curr=head;
	int t=0;
	while(curr!=NULL)
	{
		if (t==n)
		{
			return(curr->data);
		}
		t++;
		curr=curr->next;
	}
	
}
//another way
struct node* get_n(struct node* head,int n)
{
	struct node* curr= head;
	while(n--)
	{
		curr=curr->next;
	}
	return curr;
}

int main()
{
	struct node* head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	push(&head,6);
	push(&head,7);

	puts("the linked list is ");
	print_ll(head);
	puts("the 3rd node is ");
	
	printf("%d\n",Nth_node(head,3));


	struct node* ptr=get_n(head,3);
	printf("%d\n",ptr->data);
}

