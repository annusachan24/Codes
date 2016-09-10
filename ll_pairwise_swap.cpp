/*
Pairwise swap elements of a given linked list

Given a singly linked list, write a function to swap elements pairwise. For example
, if the linked list is 1->2->3->4->5 then the function should change it to 2->1->4->3->5, and if
 the linked list is 1->2->3->4->5->6 then the function should change it to 2->1->4->3->6->5. */

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
	new_node->next=*head_ref;
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
/*Function to swap two integers at addresses a and b */
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
void pairwise_swap(struct node* head)
{
	struct node* ptr=head;
	//traverse the list only when two item are left
	while(ptr!=NULL and ptr->next!=NULL)
	{

		swap((&ptr->data),(&ptr->next->data));
		ptr=ptr->next->next;
	}
}
int main()
{
	struct node* head=NULL;
	struct node* res=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	print_ll(head);
	cout<<endl;
	pairwise_swap(head);
	puts("swaped list is ");
	print_ll(head);
	cout<<endl;
	return 0;
}


