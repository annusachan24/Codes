//reversing a linked list recursive and iterative version
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void print_ll(struct node** head_ref)
{
	struct node* ptr=(*head_ref);
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void push(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*) malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	*head_ref=new_node;

}

void iterative_rev(struct node** head_ref)
{
	struct node* prev=NULL;
	struct node* current=*head_ref;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current =next;
	}
	*head_ref=prev;
}

void recursive_rev(struct node** head_ref)
{
	struct node* first=(*head_ref);
	struct node* rest=first->next;
	if(first==NULL)
		return;//empty list
	if(rest==NULL)
		return;//only 1 element in list
	recursive_rev(&rest);
	first->next->next=first;//linking the first wuth the rest
	first->next=NULL;

	*head_ref=rest;//fix the head pointer

}
int main()
{
	struct node* head=NULL;
	//int c;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	push(&head,6);
	push(&head,7);
	//c=count_len(head);
	puts("the linked list is ");
	print_ll(&head);
	puts("the reversed ll is ");
	iterative_rev(&head);
	recursive_rev(&head);
	print_ll(&head);

	return 0;
}
