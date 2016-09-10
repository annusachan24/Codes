//remove loop in a linked list
/* http://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/     follow the third method */
//Method 3 (Optimized Method 2: Without Counting Nodes in Loop)//
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

void remove_loop(struct node* head)
{
	//struct node* ptr=head;
	struct node* slow_ptr, *fast_ptr;
	slow_ptr=head;
	fast_ptr=head->next;
	//check if loop is present
	while(slow_ptr and fast_ptr and fast_ptr->next)
	{
		
		if(slow_ptr==fast_ptr)
			break;
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		
	}

	//if loop is present remove it
	if(slow_ptr==fast_ptr)
	{
		cout<<"loop was present"<<endl;
		slow_ptr=head;
		while(slow_ptr!=fast_ptr->next)
		{
			slow_ptr=slow_ptr->next;
			fast_ptr=fast_ptr->next;
		}
		cout<<"removing loop"<<endl;
		//fast_ptr->next is the looping pt
		fast_ptr->next=NULL; //remove loop
	}
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
	puts("linked list before loop");
	print_ll(head);
	cout<<endl;
	head->next->next->next =head->next;
	//cout<<"linked list after adding loop"<<endl;
	//print_ll(head);
	//cout<<endl;
	remove_loop(head);
	cout<<"list after removing the loop"<<endl;
	print_ll(head);
	cout<<endl;
	
	return 0;

}