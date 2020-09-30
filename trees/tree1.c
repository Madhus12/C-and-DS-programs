#include<stdio.h> 
#include<stdlib.h> 

struct node 
{ 
	int info;
	struct node *left, *right; 
}; 

void preorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		printf("%d \t", root->info); 
		preorder(root->left); 
		preorder(root->right); 
	} 
} 


void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		
		inorder(root->left); 
		printf("%d \t", root->info); 
		inorder(root->right); 
	} 
} 


struct node* insert(struct node* root, int data) 
{ 

	if (root == NULL) 
	{
		root=(struct node*)malloc(sizeof(struct node));
		root ->info=data;
		root ->right=NULL;
		root ->left=NULL;
	}
	else
	{
		if (data < root->info) 
		root->left = insert(root->left,data);
	else if (data > root->info) 
		root->right = insert(root->right,data);
	else if(data == root->info)
		root->left = insert(root->left,data);

	}

	

	return root; 
} 

 
int main() 
{ 
	
	int data,choice;
	struct node *root = NULL; 
	while(1)
	{
		printf("enter the choice\n");
		printf("1 for insert 2 inorder 3 for preorder\n");
		scanf("%d",&choice);
		switch(choice)
		{

		case 1:
		printf("enter the data to insert\n");
		scanf("%d",&data);
		root = insert(root, data); 
		break;

	
		case 2:
		printf("inorder\n");
		inorder(root);
		break;

		case 3:
		printf("preorder\n"); 
		preorder(root);
		break;

		default:
		exit(0);
	}
}
return 0; 
} 

