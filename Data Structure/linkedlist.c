#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
struct node*head=NULL;
void insertfirst(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n No space available\n");
		return;
	}
	newnode->link=NULL;
	printf("\nEnter the value to insert to front\n");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=newnode;
	}
	else{
		newnode->link=head;
		head=newnode;
	}
}
void insertlast(){
	struct node*temp=head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n No space available\n");
		return;
	}
	newnode->link=NULL;
	printf("\nEnter the element to insert last\n");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=newnode;
	}
	else{
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=newnode;
	}
		printf("Element inserted successfully %d",newnode->data);
}
void insertlocation(){
	int key;
	struct node*temp=head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n No space available\n");
		return;
	}
	newnode->link=NULL;
	if(head==NULL){
		printf("\n List empty\n");
		return;
	}
	printf("\n Enter the key were after you want to add element\n");
	scanf("%d",&key);
	while(temp!=NULL&&temp->data!=key){
		temp=temp->link;
	}
	if(temp==NULL){
		printf("\nValue not exist\n");
		return;
	}
	printf("\n Enter the element to inserted\n");
	scanf("%d",&newnode->data);
	newnode->link=temp->link;
	temp->link=newnode;
	printf("Value inserted successfully %d",newnode->data);
}
void deletefirst(){
	struct node*temp=head;
	if(head==NULL){
		printf("\n list empty");
		return;
	}
	head=temp->link;
	printf("\n Value deleted %d\n",temp->data);
	free(temp);
}
void deletelast(){
	struct node*temp=head,*prev=NULL;
	if(head==NULL){
		printf("\n Empty list\n");
		return;
	}
	if(temp->link==NULL){
		printf("\n Value %d deleted \n",temp->data);
		head=NULL;
		free(temp);
		return;
	}
	while(temp->link!=NULL){
		prev=temp;
		temp=temp->link;
	}
	printf("\n Value deleted %d\n",temp->data);
	prev->link=NULL;
	free(temp);
}
void deletelocation(){
	int key;
	struct node*temp=head,*prev=NULL;
	if(head==NULL){
		printf("\nEmpty list\n");
		return;
	}
	printf("\n enter the key that you want to delete\n");
	scanf("%d",&key);
	if(temp->data==key){
		head=temp->link;
		printf("\nValue %d is deleted \n",temp->data);
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->link;
	}
	if(temp==NULL){	
		printf("\n Value not exist\n");
		return;
	}
	prev->link=temp->link;
	printf("Value %d is deleted",temp->data);
	free(temp);
}
void search(){
	struct node*temp=head;
	int pos=0,found=0,val;
	if(head==NULL){
		printf("\nEmpty list");
		return;
	}
	printf("\n Enter the value to search");
	scanf("%d",&val);
	while(temp!=NULL){
		if(temp->data==val){
			printf("%d value found at location %d\n",temp->data,pos+1);
			found=1;
		}
		pos++;
		temp=temp->link;
	}
	if(!found){
		printf("Value %d not exist",val);
	}
}
void display(){
	struct node*temp=head;
	if(temp==NULL){
		printf("\n List empty");
		return;
	}
	printf("\n Elements in the list:\n");
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
void main(){
	int choice;
	printf("\n SINGLY LINKED LIST\n");
	do{
		printf("\n1.InsertFirst\n2.InsertLast\n3.Insertlocation\n4.DeleteFirst\n5.DeleteLast\n6.DeleteLocation\n7.Search\n8.Display\n9.Exit");
		printf("\n Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:insertfirst();
				break;
			case 2:insertlast();
				break;
			case 3:insertlocation();
				break;
			case 4:deletefirst();
				break;
			case 5:deletelast();
				break;
			case 6:deletelocation();
				break;
			case 7:search();
				break;
			case 8:display();
				break;
			case 9:printf("\n Exit\n");
				exit(0);
			default:printf("\n Invalid Choice\n");
		}
	}while(choice!=9);
}							
