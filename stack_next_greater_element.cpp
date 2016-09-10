#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define st struct Stack
using namespace std;

st
{
	int capacity;
	int top;
	int *array;
};

st *createstack(int size)
{
	st *newstack=(st*)malloc(sizeof(st));
	newstack->top=-1;
	newstack->capacity=size;
	newstack->array=(int*)malloc(newstack->capacity*sizeof(int));
	return newstack;
}

int isempty(st *stack)
{
	return(stack->top==-1);
}

int isfull(st *stack)
{
	return(stack->top==stack->capacity-1);
}

int pop(st *stack)
{
	if(isempty(stack))
		return INT_MAX;
	else
		return(stack->array[stack->top--]);
}

void push(st *stack, int data)
{
	if(isfull(stack))
		return;
	else
		stack->array[++stack->top]=data;
}

void next_greater_element(int a[],int n)
{
	int next,element;
	st *s=createstack(n);
	push(s,a[0]);

	for(int i=1;i<n;i++)
	{
		next=a[i];

		if(!isempty(s))
		{
			element=pop(s);

			while(element<next)
			{
				cout<<element<<"-->"<<next<<endl;
				if(isempty(s))
					break;
				element=pop(s);
			}

			if(element>next)
				push(s,element);
		}
		push(s,next);
	}

	while(!isempty(s))
	{
		element=pop(s);
		next=-1;
		cout<<element<<"-->"<<next<<endl;
	}
}


/* Driver program to test above functions */
int main()
{
    int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    next_greater_element(arr, n);

    return 0;
}