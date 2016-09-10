//detect loop in a linked list
/* Traverse linked list using two pointers.  Move one pointer by one and other pointer by two.  
If these pointers meet at some node then there is a loop.  If pointers do not meet then linked list doesn’t have loop. */
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
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

int detect_loop(struct node* head)
{
	//struct node* ptr=head;
	struct node* slow_ptr, *fast_ptr;
	slow_ptr=head;
	fast_ptr=head;
	while(slow_ptr and fast_ptr and fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
	
		if(slow_ptr==fast_ptr)
		{
			cout<<"loop detected"<<endl;
			return 1;
		}
	}
	return 0;
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
	print_ll(head);
	head->next->next->next =head;

	detect_loop(head);

	
	return 0;

}