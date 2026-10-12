#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
	{
		printf("Stack Overflow");
		return;
	}
	stack[++top]=item;
	printf("%d pushed into stack",item);
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return;
	}
	printf("%d popped from stack",stack[top--]);
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty!");
		return;
	}
	printf("Top element is %d",stack[top]);
}
void display()
{
	if(top==-1)
	{
		printf("Stack is empty");
		return;
	}
	printf("Stack elements are:\n");
	for(int i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("\nStack Operations:");
		printf("\nPush");
		printf("\nPop");
		printf("\nPeek");
		printf("\nDisplay");
		printf("\nExit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5: 
				printf("\nExiting program");
				return 0;
			default:
				printf("\nInvalid choice");
		}
	}
}
