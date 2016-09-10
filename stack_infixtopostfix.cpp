#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
#define st struct Stack

st//stack as array
{
	char *array;
	int capacity;
	int top;
};

st *createstack(int size)
{
	st *newstack=(st *)malloc(sizeof(st));
	newstack->capacity=size;
	newstack->top=-1;
	newstack->array=(char *)malloc(sizeof(newstack->capacity*sizeof(char)));
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

void push(st *stack, char op)
{
	if(isfull(stack))
		return;
	stack->array[++stack->top]=op;
	printf("%c pushed to stack\n", op);
}

char pop(st *stack)
{
	if(!isempty(stack))
		return stack->array[stack->top--];
	return '$';
}
char peek(st *stack)
{
	return stack->array[stack->top];
}


int isoperand(char ch)
{
	return (ch>='a' and ch<='z') or (ch>='A' and ch<='Z');
}

int prec(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default: return -1;
	}
}

int infixtopostfix(char *exp)
{
	int k;
	st *stack=createstack(strlen(exp));
	if(!stack)
		return -1;
	for(int i=0,k=-1;exp[i];++i)
	{
		if(isoperand(exp[i]))
			exp[++k]=exp[i];
		else if(exp[i]=='(')
			push(stack,exp[i]);
		else if(exp[i]==')')
		{
			while(!isempty(stack) and peek(stack)!='(')
				exp[++k]=pop(stack);
			if(!isempty(stack) and peek(stack)!='(')
				return -1;
			else
				pop(stack);
		}
		else
		{
			while(!isempty(stack) and prec(exp[i])<=prec(peek(stack)))
				exp[++k]=pop(stack);
			push(stack,exp[i]);
		}
	}

	while(!isempty(stack))
		exp[++k]=pop(stack);
	exp[++k] = '\0';
    printf( "%s\n", exp );

}

int main()
{
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixtopostfix(exp);
    return 0;
}