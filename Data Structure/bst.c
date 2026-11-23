#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node *createNode(int value){
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=value;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root,int value){
	if(root==NULL)
		return createNode(value);
	if(value<root->data)
		root->left=insert(root->left,value);
	else if(value>root->data)
		root->right=insert(root->right,value);
	return root;
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\t", root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root){
	if(root!=NULL){
		printf("%d\t", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\t", root->data);
	}
}
void search(struct node *root,int key)
{
	if(root==NULL)
		printf("Element not found\n");
	else if(root->data==key)
		printf("Element found\n");
	else if(key<root->data)
		search(root->left,key);
	else
		search(root->right,key);
}
int main(){
	struct node *root=NULL;
	int choice,value;
	while(1){
		printf("\n\n1. Insert");
		printf("\n2. Inorder Traversal");
		printf("\n3. Preorder Traversal");
		printf("\n4. Postorder Traversal");
		printf("\n5. Search");
		printf("\n6. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter value:");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2:printf("\nInorder: ");
				inorder(root);
				break;
			case 3:printf("\nPreorder: ");
				preorder(root);
				break;
			case 4:printf("\nPostorder: ");
				postorder(root);
				break;
			case 5:printf("Enter the value to search: ");
				scanf("%d",&value);
				search(root,value);
				break;
			case 6:exit(0);
			default : printf("Invalid choice");
		}
	}
return 0;
}
