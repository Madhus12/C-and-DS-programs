#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *right;
	struct node *left;
};

struct node* insert(struct node *root,int item)
{
	if(root==NULL)
	{
		root = (struct node*)malloc(sizeof(struct node));
		root->info=item;
		root->right=NULL;
		root->left=NULL;
	}
	else
	{
		if(item<root->info)
			root->left=insert(root->left,item);
		else if(item>root->info)
			root->right=insert(root->right,item);
		else if (item==root->info)
			root->left=insert(root->left,item);
	}
	return root;
}

void preorder(struct node *root)
{

	if(root!=NULL)
	{
			printf("%d->",root->info);
			preorder(root->left);
			preorder(root->right);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
	inorder(root->left);
	printf("%d->",root->info);
	inorder(root->right);


	}
}

int main()
{
	int choice,data;
	struct node *root=NULL;
	while(1)
	{
		printf("enter the choice\n");
		printf("1 for insert\n2 for preorder\n3 for inorder\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the data to insert");
				scanf("%d",&data);
				root=insert(root,data);
				break;

			case 2:
				preorder(root);
				break;

			case 3:
				inorder(root);
				break;

			default:
				exit(0);
		}

	}

}