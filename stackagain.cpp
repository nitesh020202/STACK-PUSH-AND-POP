#include<stdio.h>
#include<stdlib.h>
// DEFINE THE MAX SIZE OF STACK
#define MAX 10
int count =0;
// MADE THE STRUCTURE OF STACK
struct stack
{
	int item[MAX];
	int top;
};
//DEFINE THE STACK AS S
typedef struct stack st;
//CREATE EMPTY STACK 
void CreateEmptyStack(st*s)
{
	s->top=-1;
}
//CHECK STACK IS EMPTY ..?
int IsEmpty(st*s)
{
	if(s->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//STACK IS OVERFLOW
int IsFull(st*s)
{
	if(s->top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//INSERT ELEMENT
void push(st*s,int newitem)
{
	if(IsFull(s))
	{
		printf("Stack is Full.Sorry!\n");
	}
	else
	{
		s->top++;
		s->item[s->top]=newitem;
	}
	count++;
}
//POP element
void pop(st*s)
{
	if(IsEmpty(s))
	{
		printf("Stack is Empty.");
	}
	else
	{
		printf("Poped element is %d\n",s->item[s->top]);
		s->top--;
	}
	count--;
}
//PRINT THE VALUE
void printstack(st*s)
{
	printf("Stack : \n");
	for(int i = 0; i<count;i++)
	{
		printf("%d",s->item[i]);
	}
	printf("\n");
}
int main(void)
{
    st*s = (st *)malloc(sizeof(st));
	CreateEmptyStack(s);
	push(s ,1);
	push(s ,123);
	push(s ,2);
	push(s ,3);
	push(s ,4);
	push(s ,5);
	push(s ,6);
	push(s ,7);
	push(s ,8);
	push(s ,2);
	printstack(s);
	push(s ,2);
	printf("-------------------------\n");
	pop(s);
	printstack(s);
	pop(s);
}
