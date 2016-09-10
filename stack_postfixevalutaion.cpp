#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
using namespace std;
#define st struct Stack


st
{
	int top;
	int *array;
	int capacity;
};

st *createstack(int capacity)
{
	st *newstack=(st*)malloc(sizeof(st));
	newstack->capacity=capacity;
	newstack->top=-1;
	newstack->array=(int *)malloc(sizeof(newstack->capacity*sizeof(char)));
	return newstack;
}

int isempty(st *stack)
{
	return(stack->top==-1);
}
int isfull(st *stack)
{
	return (stack->top==stack->capacity-1);
}
void push(st *stack, char data)
{
	if(isfull(stack))
		return;
	stack->array[++stack->top]=data;
}
char pop(st *stack)
{
	if(!isempty(stack))
		return (stack->array[stack->top--]);
	return '$';
}
int postfixeval(char exp[])
{
	st *stack=createstack(strlen(exp));
	for(int i=0;i<strlen(exp);i++)
	{

		if(isdigit(exp[i]))
			push(stack,exp[i]-'0');
		else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
             case '+': push(stack, val2 + val1); break;
             case '-': push(stack, val2 - val1); break;
             case '*': push(stack, val2 * val1); break;
             case '/': push(stack, val2/val1);   break;
            }
        }


	}
	return pop(stack);
}

int main()
{
    char exp[] = "231*+9-";
    printf ("Value of %s is %d", exp, postfixeval(exp));
    return 0;
}