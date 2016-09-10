/*Given two linked lists, represented as linked lists (every character is a node in linked list). Write a function compare() 
that works similar to strcmp(), i.e., it returns 0 if both strings are same, 1 if first linked list is lexicographically 
greater, and -1 if second string is lexicographically greater.*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	char data;
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

void push(struct node** head_ref,char new_data)
{
	struct node* new_node=(struct node*) malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	*head_ref=new_node;

}

int cmp_string(struct node* a, struct node* b)
{
	int flag;
	while(a!=NULL and b!=NULL and a->data==b->data)
	{
			a=a->next;
			b=b->next;
	}
	if(a and b)// if both the list are not empty, compare the next mismatching char
		{
			if(a->data>b->data)
				flag=1;// a is larger
			else
				flag=-1;//b is larger
		}
	if(a and !b)//a finishes and equal to some part of b, ie b is larger
		flag=-1;
	if(!a and b)
		flag =1;

   if(a==NULL and b==NULL)//reached the end
   	flag =0;

   return flag;
}

int main()
{
	struct node* a=NULL;
	struct node* b=NULL;
	push(&a,'a');
	push(&a, 'a');
	push(&a, 'a');
	push(&a, 'b');

	push(&b,'a');
	push(&b,'a');
	push(&b,'a');
	push(&b,'c');

 	int flag=cmp_string(a,b);
 	cout<<flag<<endl;
	return 0;
}