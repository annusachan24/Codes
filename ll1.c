//Delete a Linked List node at a given position
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next= *head_ref;
	*head_ref=new_node;
}

void print_l(struct node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}

void del_n(struct node** head_ref,int n)
{
	struct node* prev,*temp;
	temp=(*head_ref);
	if(*head_ref==NULL)
		return;//list empty
	if(n==0)//1st element is to be deleted
		{
			*head_ref=temp->next;
			free(temp);
			return;
		}
	while(n!=0 and temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
		n--;

	}
	
	if(temp==NULL)
	{
		cout<<"position not present"<<endl;
		return;
	}

	prev->next = temp->next;
	free(temp);
	
}

int main()
{
	struct node* head=NULL;
	 push(&head,1);
	 push(&head,2);
	 push(&head,3);
	 push(&head,4);
	 push(&head,6);
	 push(&head,7);
	 push(&head,8);
	 push(&head,9);

	 puts("Created Linked List: ");
     print_l(head);
     puts("deleting given element");
     del_n(&head,9);
     print_l(head);
}

