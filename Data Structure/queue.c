#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int item)
{
	if(rear==MAX-1)
	{
		printf("Queue overflow");
		return;
	}
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=item;
		printf("%d inserted into queue",item);
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("Queue Underflow\n");
		return;
	}
	else
	{
		printf("Deleted element is %d\n",queue[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Queue elements are:");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
void peek()
{	
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Front element is %d\n",queue[front]);
	}
}
int main()
{
	int choice,item;
	do
	{
		printf("\nQueue operations\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				printf("Program ended\n");
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(choice!=5);
return 0;
}	
