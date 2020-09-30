#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head =NULL;

void insertion(int a)
{
	struct node *link = (struct node*)malloc(sizeof(struct node));

	link ->data = a;

	link ->next = head;

	head = link;

}

void display()
{
	struct node *ptr = head;
	while(ptr->next!=NULL)
	{
		printf("%d\n",ptr->data);
	}
}

void main()
{
	int choice,a;
	while(1)
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
					printf("enter the to insert\n");
					scanf("%d",&a);
					insertion(a);
					break;

			case 2:
					display();
					break;

			default:
					exit(0);
		}
	}

}