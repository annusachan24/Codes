//merging two linked list
//focus on the recursive version
/*Merge is one of those nice recursive problems where the recursive solution code is much cleaner than the iterative code. 
You probably wouldn’t want to use the recursive version for production code however, because it will use stack space which is 
proportional to the length of the lists.*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int c=0;//to count total no of elements in both the linked lists
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
	c++;
	//return c;
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

struct node* merged_list(struct node* l1, struct node* l2 )
{
	struct node* l3, *temp1, *temp2;
	l3=NULL;/*this fucking line costed me an hour or so on this code !*/
	temp1=l1;
	temp2=l2;
	//int i=7;
	int i=c;//to count total no of elements in both the linked lists
	while(temp1!=NULL or temp2!=NULL)
	//while(i--)
	{

		if(temp1==NULL)
		{
			cout<<"here1"<<endl;
			cout<<temp2->data<<endl;
			push(&l3,temp2->data);
			temp2=temp2->next;
			
		}
		else if(temp2==NULL)
		{
			cout<<"here2"<<endl;
			cout<<temp1->data<<endl;
			push(&l3,temp1->data);
			temp1=temp1->next;
			
		}
		else if(temp1->data<=temp2->data)
		{
			cout<<"here3"<<endl;
			cout<<temp1->data<<endl;
			push(&l3,temp1->data);
			temp1=temp1->next;
			
		}
		else
		{
			cout<<"here4"<<endl;
			cout<<temp2->data<<endl;
			push(&l3,temp2->data);
			temp2=temp2->next;
			
		}
	}
	//print_ll(l3);
	//l3->next=NULL;
	return l3;
}


struct node* recursive_merging(struct node* l1 , struct node* l2)
{
	struct node* res=NULL;
	if(l1==NULL)
		return l2;
	else if(l2==NULL)
		return l1;
	else if(l1->data<=l2->data)
	{
		res=l1;
		res->next=recursive_merging(l1->next,l2);
	}
	else
	{
		res=l2;
		res->next=recursive_merging(l1,l2->next);
	}
	return res;
}

int main()
{
    /* Start with the empty list */
    struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;
 
    /* Let us create two sorted linked lists to test
      the functions
       Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    push(&a, 1);
 
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);

    print_ll(a);
    cout<<endl;
    print_ll(b);
    cout<<endl;
 
    /* Remove duplicates from linked list */
    res = merged_list(a, b);
 	//res=recursive_merging(a,b);
    printf("Merged Linked List is: \n");
    print_ll(res);
 
    return 0;
}