#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
#define st struct Stack

st//stack as array
{
	int *array;
	int capacity;
	int top;
};

st *createstack(int size)
{
	st *newstack=(st *)malloc(sizeof(st));
	newstack->top=-1;
	newstack->capacity=size;
	newstack->array=(int *)malloc(sizeof(newstack->capacity*sizeof(int)));
	return newstack;
}

int isempty(st *stack)
{
	if(stack->top==-1)
		return 1;
	else
		return 0;
}

int isfull(st *stack)
{
	if(stack->top==stack->capacity-1)
		return 1;
	else
		return 0;
}

void push(st *stack, int data)
{
	if(!isfull(stack))
	{
		stack->top++;

		stack->array[stack->top]=data;
	}
	else
		{
			cout<<"stack is full "<<endl;
			return;
		}
}

int pop(st *stack)
{
	if(!isempty(stack))
		return(stack->array[stack->top--]);
	else
		return INT_MIN;
	/*if(isempty(stack))
		return INT_MIN;
	cout<<"here "<<endl;
	int top_val=stack->array[stack->top--];
	cout<<top_val<<endl;
	return(top_val);*/	

}

int peek(st *stack)
{
	if(isempty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

int main()
{
	st* stack = createstack(100);
 
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
 
    printf("%d popped from stack\n", pop(stack));
    printf("%d popped from stack\n", pop(stack));
 
 
    printf("Top item is %d\n", peek(stack));
 
    return 0;
}

