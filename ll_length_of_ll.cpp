//Find Length of a Linked List:iterative version amd recursive version
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


struct node
{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*) malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;


}

int count_len(struct node* head )
{
	int count=0;
	struct node *ptr = head ;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
void print_ll(struct node* head)
{
	struct node *ptr = head;
	while(ptr!=NULL)
	{
		printf( "%d ",ptr->data);
		ptr=ptr->next;
	}

}
int recurisve_count(struct node* head)
{
	if(head==NULL)
		return 0;
	else
		return 1+recurisve_count(head->next);
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
	print_ll(head);
	puts("\nthe size of ll is ");
	printf("%d\n", count_len(head) );
	printf("%d\n",recurisve_count(head));

	return 0;
}
