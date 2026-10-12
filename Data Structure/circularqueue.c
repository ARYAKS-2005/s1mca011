#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isfull()
{
	if((rear+1)%MAX==front)
	{
		return 1;
	}
	return 0;
}
int isempty()
{
	if(front==-1 && rear==-1)
	{
		return 1;
	}
	return 0;
}
void display()
{
	int i;
	if(isempty())
	{
		printf("\nQueue is empty");
		return;
	}
	printf("\nQueue elements are: ");
	i=front;
	do{
		printf("%d\t",queue[i]);
		i=(i+1)%MAX;
	}while(i!=(rear+1)%MAX);
}
void dequeue()
{
	if(isempty())
	{
		printf("\nQueue is empty");
		return;
	}
	printf("\n%d is deleted",queue[front]);
	if(front==rear){
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX;
	}
}
void enqueue()
{
	int x;
	if(isfull())
	{
		printf("Queue is full\n");
		return;
	}
	printf("Enter the element to insert:");
	scanf("%d",&x);
	if(isempty()){
		front=rear=0;
	}
	else{
		rear=(rear+1)%MAX;
	}
	queue[rear]=x;
	printf("\nElement %d inserted successfully",queue[rear]);
}
void search()
{
	int key,i,found=0;
	if(isempty())
	{
		printf("Queue is empty");
		return;
	}
	printf("\nEnter the element to search: ");
	scanf("%d",&key);
	i=front;
	do{
		if(queue[i]==key)
		{
			printf("\nElement %d found at position %d\n",key,i+1);
			found=1;
			break;
		}
		i=(i+1)%MAX;
	}while(i!=(rear+1)%MAX);
	if(!found){
		printf("Element %d not found in the queue\n",key);
	}
}
int main()
{
	int choice;
	do
	{
		printf("\nQueue operations\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Search\n");
		printf("5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();                                                                            
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
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
