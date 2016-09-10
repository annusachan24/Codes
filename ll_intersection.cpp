#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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
/*
THIS METHOD NOT WORKING, SEGMENTATION FAULT L1 OR L2 REACHES NULL INT HE PROCESS
struct node* intersection(struct node* l1,struct node* l2)
{
	int x;
	struct node* l3 =NULL;
	struct node* ptr1=l1;
	struct node* ptr2=l2;
	//while(l1->next!=NULL and l2->next!=NULL and l1 and l2)
	while(l1 and l2)
	{
		if(l1->data==l2->data)
		{
			cout<<"1 l1 data is "<<l1->data<<endl;
			cout<<"1 l2 data is "<<l2->data<<endl;
			push(&l3,l1->data);
			l1=l1->next;
			//cout<<"error"<<endl;
			l2=l2->next;
			//cout<<"error"<<endl;
			//cout<<"1 new l1 data is "<<l1->data<<endl;
			//cout<<"1 new l2 data is "<<l2->data<<endl;
			
		}
		//cout<<"error"<<endl;
		if(l1->data<l2->data)
		{
			cout<<"2 data is "<<l1->data<<endl;

			l1=l1->next;
			cout<<"error"<<endl;
			
		}
		else 
		{
			cout<<"3 data is "<<l2->data<<endl;
			l2=l2->next;
			//cout<<"error2"<<endl;
		}
	}
	print_ll(l3);
	//return l3;
} */


struct node* intersection(struct node* a, struct node* b)
{
	struct node dummy;
	struct node* tail=&dummy;
	dummy.next=NULL;
	while(a!=NULL and b!=NULL)
	{


		if(a->data==b->data)
		{
			push((&tail->next),a->data);
			tail=tail->next;
			a=a->next;
			b=b->next;
		}
		else if (a->data<b->data)
			a=a->next;
		else
			b=b->next;
	}
	return dummy.next;
}

struct node *sortedIntersect(struct node *a, struct node *b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;
 
    /* If both lists are non-empty */
 
    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);
 
    if (a->data > b->data)
        return sortedIntersect(a, b->next);
 
    // Below lines are executed only when a->data == b->data
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = a->data;
 
    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
}


int main()
{
	struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;
 
    
    /* Let us create the first sorted linked list to test the functions
   Created linked list will be 1->2->3->4->5->6 */
  push(&a, 6);
  push(&a, 5);
  push(&a, 4);
  push(&a, 3);
  push(&a, 2);
  push(&a, 1);                                   
  
  /* Let us create the second sorted linked list 
   Created linked list will be 2->4->6->8 */
  push(&b, 8);
  push(&b, 6);
  push(&b, 4);
  push(&b, 2);    

    print_ll(a);
    cout<<endl;
    print_ll(b);
    cout<<endl;

    //res=intersection(a,b);
    res=sortedIntersect(a,b);
    print_ll(res);

}